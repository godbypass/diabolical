package wtf.diablo.launcher.temporary;

import by.radioegor146.nativeobfuscator.Native;
import com.google.gson.JsonObject;
import kong.unirest.HttpResponse;
import kong.unirest.Unirest;
import net.lingala.zip4j.ZipFile;
import wtf.diablo.hwid.HwidUtil;
import wtf.diablo.launcher.temporary.session.DiabloSession;
import wtf.diablo.launcher.temporary.util.Constants;
import wtf.diablo.launcher.temporary.util.DiabloAPI;

import javax.swing.*;
import java.io.*;

@Native
public final class LauncherInstance {
    public static final File LAUNCHER_DIRECTORY = new File(System.getProperty("user.home") + File.separator + "Diablo");
    private final static LauncherInstance instance = new LauncherInstance();

    private DiabloSession session;

    private LauncherInstance() {
        if (!LAUNCHER_DIRECTORY.exists())
            LAUNCHER_DIRECTORY.mkdir();
    }

    public boolean login(final String username, final String password) {
        final JsonObject json = new JsonObject();
        json.addProperty("username", username);
        json.addProperty("password", password);

        final HttpResponse<String> response = Unirest.post(DiabloAPI.LOGIN_URL)
                .header("Content-Type", "application/json")
                .body(Constants.GSON.toJson(json))
                .asString();

        if (response.getStatus() != 200) {
            System.out.println("Invalid username or password.");
            return false;
        }

        final JsonObject body = Constants.GSON.fromJson(response.getBody(), JsonObject.class);
        attemptAuthorization(body.get("sessionID").getAsString());
        return true;
    }

    public void validateHWID() {
        final HttpResponse<String> contentResponse = Unirest.get(DiabloAPI.HWID_IS_SET_URL)
                .header("Authorization", this.session.getSessionID())
                .asString();

        if (contentResponse.getStatus() != 200) {
            JOptionPane.showMessageDialog(null, "Failed to get content.", "Error", JOptionPane.ERROR_MESSAGE);
            return;
        }

        final JsonObject contentBody = Constants.GSON.fromJson(contentResponse.getBody(), JsonObject.class);
        final boolean hwidSet = contentBody.get("isSet").getAsBoolean();

        if (!hwidSet) {
            final JsonObject hwid = new JsonObject();
            hwid.addProperty("hwid", HwidUtil.generateHwid());

            final HttpResponse<String> hwidResponse = Unirest.post(DiabloAPI.HWID_SET_URL)
                    .header("Authorization", this.session.getSessionID())
                    .header("Content-Type", "application/json")
                    .body(Constants.GSON.toJson(hwid))
                    .asString();

            if (hwidResponse.getStatus() != 200) {
                JOptionPane.showMessageDialog(null, "Failed to set HWID.", "Error", JOptionPane.ERROR_MESSAGE);
                return;
            }

            JOptionPane.showMessageDialog(null, "Your HWID was bound to this machine.", "HWID Update", JOptionPane.INFORMATION_MESSAGE);
        }
    }
    private void attemptAuthorization(final String sessionID) {
        final DiabloSession session = new DiabloSession(sessionID);
        this.session = session;
        this.session.update();
    }

    public void initializeAssets() {
        final String bootstrapperContentID = generateContentID(session, "bootstrapper");

        if (bootstrapperContentID == null) {
            JOptionPane.showMessageDialog(null, "An error occurred while generating the content ID", "Error", JOptionPane.ERROR_MESSAGE);
            return;
        }

        System.out.println("Downloading bootstrapper...");

        File bootstrapperFile = null;
        try {
            bootstrapperFile = writeBootstrapperFile(session, bootstrapperContentID);

            if (bootstrapperFile == null) {
                JOptionPane.showMessageDialog(null, "An error occurred while downloading the bootstrapper", "Error", JOptionPane.ERROR_MESSAGE);
                return;
            }


        } catch (IOException ex) {
            ex.printStackTrace();
            JOptionPane.showMessageDialog(null, "An error occurred while downloading the bootstrapper", "Error", JOptionPane.ERROR_MESSAGE);
            return;
        }

        final String nativesContentID = generateContentID(session, "natives");

        if (nativesContentID == null) {
            JOptionPane.showMessageDialog(null, "An error occurred while generating the content ID", "Error", JOptionPane.ERROR_MESSAGE);
            return;
        }

        final File nativeDirectory = new File(LauncherInstance.LAUNCHER_DIRECTORY, "natives");

        if (!nativeDirectory.exists()) {
            System.out.println("Creating natives directory...");

            nativeDirectory.mkdirs();
            File nativesFile = null;

            try {
                nativesFile = writeNativesFile(session, nativesContentID);

                if (nativesFile == null) {
                    JOptionPane.showMessageDialog(null, "An error occurred while downloading the natives", "Error", JOptionPane.ERROR_MESSAGE);
                    return;
                }
            } catch (IOException ex) {
                ex.printStackTrace();
                JOptionPane.showMessageDialog(null, "An error occurred while downloading the natives", "Error", JOptionPane.ERROR_MESSAGE);
                return;
            }

            final String librariesContentID = generateContentID(session, "libraries");

            if (librariesContentID == null) {
                JOptionPane.showMessageDialog(null, "An error occurred while generating the content ID", "Error", JOptionPane.ERROR_MESSAGE);
                return;
            }

            System.out.println("Downloading libraries...");

            final boolean extracted = extract(nativesFile, nativeDirectory);

            if (!extracted) {
                JOptionPane.showMessageDialog(null, "An error occurred while extracting the natives", "Error", JOptionPane.ERROR_MESSAGE);
                return;
            }

            if (!nativesFile.delete()) {
                JOptionPane.showMessageDialog(null, "An error occurred while deleting the natives file", "Error", JOptionPane.ERROR_MESSAGE);
                return;
            }
        }


        final String librariesContentID = generateContentID(session, "libraries");

        if (librariesContentID == null) {
            JOptionPane.showMessageDialog(null, "An error occurred while generating the content ID", "Error", JOptionPane.ERROR_MESSAGE);
            return;
        }

        final File librariesDirectory = new File(LauncherInstance.LAUNCHER_DIRECTORY, "libraries");

        if (!librariesDirectory.exists()) {
            librariesDirectory.mkdirs();

            System.out.println("Downloading libraries...");

            File librariesFile = null;

            try {
                librariesFile = writeLibrariesFile(session, librariesContentID);

                if (librariesFile == null) {
                    JOptionPane.showMessageDialog(null, "An error occurred while downloading the libraries", "Error", JOptionPane.ERROR_MESSAGE);
                    return;
                }
            } catch (IOException ex) {
                ex.printStackTrace();
                JOptionPane.showMessageDialog(null, "An error occurred while downloading the libraries", "Error", JOptionPane.ERROR_MESSAGE);
                return;
            }

            System.out.println("Extracting libraries...");

            final boolean extracted = extract(librariesFile, librariesDirectory);

            if (!extracted) {
                JOptionPane.showMessageDialog(null, "An error occurred while extracting the libraries", "Error", JOptionPane.ERROR_MESSAGE);
                return;
            }

            if (!librariesFile.delete()) {
                JOptionPane.showMessageDialog(null, "An error occurred while deleting the libraries file", "Error", JOptionPane.ERROR_MESSAGE);
                return;
            }
        }
    }

    public void launch() {
        final File bootstrapper = new File(LauncherInstance.LAUNCHER_DIRECTORY.getAbsolutePath() + File.separator + "bootstrapper.exe");

        if (!bootstrapper.exists()) {
            JOptionPane.showMessageDialog(null, "An error occurred while locating the bootstrapper", "Error", JOptionPane.ERROR_MESSAGE);
            return;
        }

        final String releaseContentID = generateContentID(session, "release");

        if (releaseContentID == null) {
            JOptionPane.showMessageDialog(null, "An error occurred while generating the content ID", "Error", JOptionPane.ERROR_MESSAGE);
            return;
        }

        System.out.println("Launching Diablo...");

        System.out.println("java -Djava.library.path=natives/ -jar " + bootstrapper.getAbsolutePath() + " " + releaseContentID + " " + session.getSessionID() + " Start");
        /*
        try {
            final ProcessBuilder processBuilder = new ProcessBuilder();
            processBuilder.directory(LauncherInstance.LAUNCHER_DIRECTORY);
            processBuilder.command("java", "-Djava.library.path=natives/", "-jar", bootstrapper.getAbsolutePath(), releaseContentID, session.getSessionID(), "Start");
            processBuilder.start();
        } catch (Exception ex) {
            throw new RuntimeException(ex);
        }

         */
    }

    private static String generateContentID(final DiabloSession session, final String type) {
        final HttpResponse<String> response = Unirest.get(DiabloAPI.GENERATE_CONTENT_ID_URL + "?type=" + type)
                .header("Authorization", session.getSessionID())
                .asString();

        if (response.getStatus() != 200) {
            return null;
        }

        return response.getBody();
    }

    private static File writeBootstrapperFile(final DiabloSession session, final String contentID) throws IOException {
        final HttpResponse<byte[]> bootstrapperResponse = Unirest.get(DiabloAPI.GET_URL)
                .header("Authorization", session.getSessionID())
                .queryString("contentID", contentID)
                .asBytes();

        if (bootstrapperResponse.getStatus() != 200) {
            return null;
        }

        final File bootstrapper = new File(LauncherInstance.LAUNCHER_DIRECTORY.getAbsolutePath() + File.separator + "bootstrapper.exe");

        final FileOutputStream fileOutputStream = new FileOutputStream(bootstrapper);
        fileOutputStream.write(bootstrapperResponse.getBody());
        fileOutputStream.close();

        return bootstrapper;
    }

    private static File writeNativesFile(final DiabloSession session, final String contentID) throws IOException {
        final HttpResponse<byte[]> nativesResponse = Unirest.get(DiabloAPI.GET_URL)
                .header("Authorization", session.getSessionID())
                .queryString("contentID", contentID)
                .asBytes();

        if (nativesResponse.getStatus() != 200) {
            return null;
        }

        final File natives = new File(LauncherInstance.LAUNCHER_DIRECTORY.getAbsolutePath() + File.separator + "natives.zip");

        final FileOutputStream fileOutputStream = new FileOutputStream(natives);
        fileOutputStream.write(nativesResponse.getBody());
        fileOutputStream.close();

        return natives;
    }

    private static File writeLibrariesFile(final DiabloSession session, final String contentID) throws IOException {
        final HttpResponse<byte[]> librariesResponse = Unirest.get(DiabloAPI.GET_URL)
                .header("Authorization", session.getSessionID())
                .queryString("contentID", contentID)
                .asBytes();

        if (librariesResponse.getStatus() != 200) {
            return null;
        }

        final File libraries = new File(LauncherInstance.LAUNCHER_DIRECTORY.getAbsolutePath() + File.separator + "libraries.zip");

        final FileOutputStream fileOutputStream = new FileOutputStream(libraries);
        fileOutputStream.write(librariesResponse.getBody());
        fileOutputStream.close();

        return libraries;
    }

    private static boolean extract(final File file, final File destination) {
        try {
            final ZipFile zipFile = new ZipFile(file);

            zipFile.extractAll(destination.getAbsolutePath());
            return true;
        } catch (final IOException e) {
            e.printStackTrace();
            return false;
        }
    }

    public static LauncherInstance getInstance() {
        return instance;
    }
}

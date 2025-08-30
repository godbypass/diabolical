package wtf.diablo.launcher.frame.main;

import by.radioegor146.nativeobfuscator.Native;
import kong.unirest.HttpResponse;
import kong.unirest.Unirest;
import net.lingala.zip4j.ZipFile;
import wtf.diablo.launcher.LauncherInstance;
import wtf.diablo.launcher.session.DiabloRankEnum;
import wtf.diablo.launcher.session.DiabloSession;
import wtf.diablo.launcher.util.DiabloAPI;

import javax.swing.*;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.List;

@Native
public final class MainFrame extends JFrame {
    private JTabbedPane tabbedPane1;
    private JPanel panel1;
    private JButton launchButton;
    private JComboBox<String> possibleVersions;
    private JProgressBar statusBar;
    private JLabel statusLabel;
    private JLabel welcomeLabel;
    private JLabel uidLabel;
    private JButton cleanDirectoryButton;

    public MainFrame(final LauncherInstance instance) {
        super("Diablo - Launcher");
        this.setSize(450, 250);
        this.setLocationRelativeTo(null);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setResizable(false);
        this.setContentPane(this.panel1);
        this.setIconImage(new ImageIcon(this.getClass().getResource("/icon.png")).getImage());

        final DiabloSession session = instance.getSession();

        this.welcomeLabel.setText("Welcome, " + session.getUsername() + "!");

        this.uidLabel.setText("UID: " + session.getId());

        this.statusBar.setVisible(false);
        this.statusLabel.setVisible(false);

        final List<DiabloRankEnum> ranks = DiabloRankEnum.getRanksFromPermissionLevel(session.getRank().getPermissionLevel());

        for (final DiabloRankEnum rank : ranks) {
            if (rank == null)
                continue;

            final String formattedString = rank.getLaunchType().substring(0, 1).toUpperCase() + rank.getLaunchType().substring(1).toLowerCase();

            this.possibleVersions.addItem(formattedString);
        }

        cleanDirectoryButton.addActionListener(e -> {
            new Thread(() -> {
                final File nativeDirectory = new File(LauncherInstance.LAUNCHER_DIRECTORY, "natives");
                final File librariesDirectory = new File(LauncherInstance.LAUNCHER_DIRECTORY, "libraries");

                if (nativeDirectory.exists()) {
                    for (final File file : nativeDirectory.listFiles()) {
                        if (file.isDirectory())
                            continue;

                        file.delete();
                    }
                }

                if (librariesDirectory.exists()) {
                    for (final File file : librariesDirectory.listFiles()) {
                        if (file.isDirectory())
                            continue;

                        file.delete();
                    }
                }
            }).start();
        });

        launchButton.addActionListener(e -> {
            new Thread(() -> {
                final String selectedVersion = (String) this.possibleVersions.getSelectedItem();

                if (selectedVersion == null)
                    return;

                statusBar.setVisible(true);
                statusLabel.setVisible(true);
                statusBar.setValue(0);

                statusLabel.setText("Generating content ID...");

                final String bootstrapperContentID = generateContentID(session, "bootstrapper");

                if (bootstrapperContentID == null) {
                    JOptionPane.showMessageDialog(null, "An error occurred while generating the content ID", "Error", JOptionPane.ERROR_MESSAGE);
                    return;
                }

                statusLabel.setText("Downloading bootstrapper...");
                statusBar.setValue(10);

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


                //TODO: Add a check to make sure to only redownload the natives if the hash is different

                final File nativeDirectory = new File(LauncherInstance.LAUNCHER_DIRECTORY, "natives");

                if (!nativeDirectory.exists()) {
                    statusLabel.setText("Downloading natives...");
                    statusBar.setValue(20);

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

                    statusLabel.setText("Extracting natives...");
                    statusBar.setValue(25);

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

                    statusLabel.setText("Downloading libraries...");
                    statusBar.setValue(30);

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

                    statusLabel.setText("Extracting libraries...");
                    statusBar.setValue(35);

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

                final String releaseContentID = generateContentID(session, "release");

                if (releaseContentID == null) {
                    JOptionPane.showMessageDialog(null, "An error occurred while generating the content ID", "Error", JOptionPane.ERROR_MESSAGE);
                    return;
                }

                statusBar.setValue(100);
                statusLabel.setText("Launching bootstrapper...");

                try {
                    final ProcessBuilder processBuilder = new ProcessBuilder();
                    processBuilder.directory(LauncherInstance.LAUNCHER_DIRECTORY);
                    processBuilder.command("java", "-Djava.library.path=natives/", "-jar", bootstrapperFile.getAbsolutePath(), releaseContentID, session.getSessionID(), "Start");
                    processBuilder.start();
                } catch (IOException ex) {
                    throw new RuntimeException(ex);
                }

                this.dispose();

            }).start();
        });
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
}

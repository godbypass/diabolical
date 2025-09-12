package wtf.diablo.bootstrap;

import by.radioegor146.nativeobfuscator.Native;
import wtf.diablo.bootstrap.util.RemoteClassLoader;

import java.io.File;
import java.io.IOException;
import java.nio.file.Files;

@Native
public final class Loader {
    private static final String CONTENT_ENDPOINT = "https://diablo.wtf/api/v1/download/get?contentID=%s";
    private static final File DIABLO_DIRECTORY = new File(System.getProperty("user.home"), "Diablo");

    private final RemoteClassLoader remoteClassLoader;
    private final String contentID;
    private final String sessionID;
    private final String entryClass;

    public Loader(final String contentID, final String sessionID, final String entryClass) {
        this.contentID = contentID;
        this.sessionID = sessionID;
        this.entryClass = entryClass;
        this.remoteClassLoader = new RemoteClassLoader(this.getClass().getClassLoader());

        System.setProperty("sessionID", sessionID);
    }

    public void load() {
        final File libraryDirectory = new File(DIABLO_DIRECTORY, "libraries");
        for (final File file : libraryDirectory.listFiles()) {
            if (file.getName().endsWith(".jar")) {
                try {
                    remoteClassLoader.loadJar(Files.readAllBytes(file.toPath()));
                } catch (final IOException e) {
                    throw new RuntimeException(e);
                }
            }
        }

        try {
            remoteClassLoader.downloadAndDecrypt(String.format(CONTENT_ENDPOINT, this.contentID), this.sessionID);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    public void start() throws ClassNotFoundException {
        final Class<?> entryClass = remoteClassLoader.loadClass(this.entryClass);

        try {
            entryClass.getMethod("main", String[].class).invoke(null, (Object) new String[]{});
        } catch (final Exception e) {
            e.printStackTrace();
        }
    }
}

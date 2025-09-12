package wtf.diablo.launcher.temporary;

import by.radioegor146.nativeobfuscator.Native;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Scanner;

@Native
public final class Main {
    public static final byte[] DIABLO_HEADER = "DIABLO_AUTHORIZATION_HEADER".getBytes();

    public static void main(final String[] args) {
        final Scanner scanner = new Scanner(System.in);

        System.out.print("Enter username: ");
        final String username = scanner.nextLine();

        System.out.print("Enter password: ");
        final String password = scanner.nextLine();

        final boolean response = LauncherInstance.getInstance().login(username, password);

        if (response) {
            System.out.println("Logged in successfully!");

            /*
            System.out.println("Checking HWID...");
            LauncherInstance.getInstance().validateHWID();
            System.out.println("HWID validated!");

             */

            System.out.println("Initializing assets...");
            LauncherInstance.getInstance().initializeAssets();
            System.out.println("Assets initialized!");

            LauncherInstance.getInstance().launch();
            System.exit(0);
        } else {
            System.exit(0);
        }
    }

    private static String gatherSessionID() {
        final Path currentfile = Paths.get(Main.class.getProtectionDomain().getCodeSource().getLocation().getPath().substring(1));

        try {
            final byte[] bytes = Files.readAllBytes(currentfile);

            for (int i = bytes.length - DIABLO_HEADER.length; i > 0; i--) {
                System.out.println("Checking at " + i + " through " + (i + DIABLO_HEADER.length) + " of " + bytes.length);
                final byte[] header = new byte[DIABLO_HEADER.length];
                System.arraycopy(bytes, i, header, 0, DIABLO_HEADER.length);

                if (header == DIABLO_HEADER) {
                    System.out.println("Found Diablo header at " + i);
                    final byte[] rest = new byte[bytes.length - i - DIABLO_HEADER.length];

                    System.arraycopy(bytes, i + DIABLO_HEADER.length, rest, 0, rest.length);

                    final String sessionID = new String(rest);
                    System.out.println("Session ID: " + sessionID);
                    return sessionID;
                }
            }
        } catch (IOException e) {
            throw new RuntimeException(e);
        }

        throw new RuntimeException("Could not find Diablo header");
    }
}

package wtf.diablo.bootstrap;

import by.radioegor146.nativeobfuscator.Native;
import wtf.diablo.bootstrap.util.Checks;

@Native
public class Main {
    public static void main(String[] args) throws ClassNotFoundException {
        //final Thread processWatcherThread = generateProcessWatcherThread();
        //processWatcherThread.setDaemon(false);
        //processWatcherThread.start();

        //while (processWatcherThread.isAlive()) {
            final String contentID = args[0];
            final String sessionID = args[1];
            final String entryClass = args[2];

            final Loader loader = new Loader(contentID, sessionID, entryClass);
            //final Loader loader = new Loader("contentID", "sessionID", "Start");
            loader.load();
            loader.start();
        //}

        //System.exit(0);
    }

    private static Thread generateProcessWatcherThread() {
        return new Thread(() -> {
            while (true) {
                try {
                    if (Checks.checkForAgent()) {
                        throw new RuntimeException("Debugger detected!");
                    }
                    Thread.sleep(1000L);
                } catch (final InterruptedException e) {
                    System.err.println("Process watcher thread interrupted!");
                    System.exit(-1);
                }
            }
        });
    }
}
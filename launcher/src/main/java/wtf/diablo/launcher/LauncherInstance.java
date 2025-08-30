package wtf.diablo.launcher;

import by.radioegor146.nativeobfuscator.Native;
import wtf.diablo.launcher.frame.login.LoginFrame;
import wtf.diablo.launcher.session.DiabloSession;

import javax.swing.*;
import java.io.File;

@Native
public final class LauncherInstance {
    public static final File LAUNCHER_DIRECTORY = new File(System.getProperty("user.home") + File.separator + "Diablo");
    private final static LauncherInstance instance = new LauncherInstance();

    private DiabloSession session;

    private LauncherInstance() {
        if (!LAUNCHER_DIRECTORY.exists())
            LAUNCHER_DIRECTORY.mkdir();
    }

    public void initialize() throws UnsupportedLookAndFeelException {
        //UIManager.setLookAndFeel(new FlatMaterialPalenightContrastIJTheme());
        SwingUtilities.invokeLater(() -> {
            final LoginFrame loginFrame = new LoginFrame(this);
            loginFrame.setVisible(true);
        });
    }

    public DiabloSession getSession() {
        return this.session;
    }

    public void setSession(final DiabloSession session) {
        this.session = session;
    }

    public static LauncherInstance getInstance() {
        return instance;
    }
}

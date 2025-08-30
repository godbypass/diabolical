package wtf.diablo;

import by.radioegor146.nativeobfuscator.Native;
import wtf.diablo.launcher.LauncherInstance;

import javax.swing.*;

@Native
public class Main {
    public static void main(String[] args) throws UnsupportedLookAndFeelException {
        LauncherInstance.getInstance().initialize();
    }
}
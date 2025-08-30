package wtf.diablo.hwid.grabber;

import wtf.diablo.hwid.HwidUtil;

import javax.swing.*;
import java.awt.*;
import java.awt.datatransfer.StringSelection;

public class Main {
    public static void main(String[] args) {
        final String hwid = HwidUtil.generateHwid();

        JOptionPane.showMessageDialog(null, hwid, "Nabbed new HWID", JOptionPane.INFORMATION_MESSAGE);

        final Toolkit toolkit = Toolkit.getDefaultToolkit();
        toolkit.getSystemClipboard().setContents(new StringSelection(hwid), null);

    }
}
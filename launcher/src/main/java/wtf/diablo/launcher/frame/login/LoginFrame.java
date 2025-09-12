package wtf.diablo.launcher.frame.login;

import by.radioegor146.nativeobfuscator.Native;
import com.google.gson.JsonObject;
import kong.unirest.HttpResponse;
import kong.unirest.Unirest;
import wtf.diablo.hwid.HwidUtil;
import wtf.diablo.launcher.LauncherInstance;
import wtf.diablo.launcher.frame.main.MainFrame;
import wtf.diablo.launcher.session.DiabloSession;
import wtf.diablo.launcher.util.Constants;
import wtf.diablo.launcher.util.DiabloAPI;

import javax.swing.*;
import java.io.File;
import java.io.FileWriter;
import java.nio.file.Files;

@Native
public final class LoginFrame extends JFrame {
    private final static File CACHED_LOGIN = new File(LauncherInstance.LAUNCHER_DIRECTORY + File.separator + "TOKEN.diablo");

    private JTextField usernameTextField;
    private JPanel panel1;
    private JPasswordField userPasswordField;
    private JCheckBox saveLoginCheckBox;
    private JButton Login;

    public LoginFrame(final LauncherInstance instance) {
        super("Diablo - Login");
        this.setSize(450, 200);
        this.setContentPane(this.panel1);
        this.setLocationRelativeTo(null);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setResizable(false);
        this.setIconImage(new ImageIcon(this.getClass().getResource("/icon.png")).getImage());

        this.Login.addActionListener(e -> {
            final String username = this.usernameTextField.getText();
            final String password = new String(this.userPasswordField.getPassword());
            if ((username.isEmpty() || password.isEmpty()) && !CACHED_LOGIN.exists()) {
                JOptionPane.showMessageDialog(this, "Please enter a username and password.", "Error", JOptionPane.ERROR_MESSAGE);
                return;
            }

            String sessionID = null;
            if (!CACHED_LOGIN.exists()) {
                final JsonObject json = new JsonObject();
                json.addProperty("username", username);
                json.addProperty("password", password);

                final HttpResponse<String> response = Unirest.post(DiabloAPI.LOGIN_URL)
                        .header("Content-Type", "application/json")
                        .body(Constants.GSON.toJson(json))
                        .asString();

                if (response.getStatus() != 200) {
                    JOptionPane.showMessageDialog(this, "Invalid username or password.", "Error", JOptionPane.ERROR_MESSAGE);
                    return;
                }

                final JsonObject body = Constants.GSON.fromJson(response.getBody(), JsonObject.class);
                sessionID = body.get("sessionID").getAsString();

                if (this.saveLoginCheckBox.isSelected()) {
                    try {
                        CACHED_LOGIN.createNewFile();
                        final FileWriter writer = new FileWriter(CACHED_LOGIN);
                        writer.write(sessionID);
                        writer.close();
                    } catch (final Exception ex) {
                        ex.printStackTrace();
                    }
                }
            } else {
                this.saveLoginCheckBox.setSelected(true);

                try {
                    final String cachedSessionID = new String(Files.readAllBytes(CACHED_LOGIN.toPath()));
                    final HttpResponse<String> response = Unirest.get(DiabloAPI.USER_URL)
                            .header("Authorization", cachedSessionID)
                            .asString();

                    if (response.getStatus() != 200) {
                        JOptionPane.showMessageDialog(this, "Invalid username or password.", "Error", JOptionPane.ERROR_MESSAGE);

                        CACHED_LOGIN.delete();
                        return;
                    }

                    sessionID = cachedSessionID;
                } catch (final Exception ex) {
                    ex.printStackTrace();
                }
            }

            final DiabloSession session = new DiabloSession(sessionID);
            instance.setSession(session);
            session.update();

            JOptionPane.showMessageDialog(this, "Successfully logged in.", "Success", JOptionPane.INFORMATION_MESSAGE);
            this.dispose();

            final HttpResponse<String> contentResponse = Unirest.get(DiabloAPI.HWID_IS_SET_URL)
                    .header("Authorization", sessionID)
                    .asString();

            if (contentResponse.getStatus() != 200) {
                JOptionPane.showMessageDialog(this, "Failed to get content.", "Error", JOptionPane.ERROR_MESSAGE);
                return;
            }

            final JsonObject contentBody = Constants.GSON.fromJson(contentResponse.getBody(), JsonObject.class);
            final boolean hwidSet = contentBody.get("isSet").getAsBoolean();

            if (!hwidSet) {
                final JsonObject hwid = new JsonObject();
                hwid.addProperty("hwid", HwidUtil.generateHwid());

                final HttpResponse<String> hwidResponse = Unirest.post(DiabloAPI.HWID_SET_URL)
                        .header("Authorization", sessionID)
                        .header("Content-Type", "application/json")
                        .body(Constants.GSON.toJson(hwid))
                        .asString();

                if (hwidResponse.getStatus() != 200) {
                    JOptionPane.showMessageDialog(this, "Failed to set HWID.", "Error", JOptionPane.ERROR_MESSAGE);
                    return;
                }

                JOptionPane.showMessageDialog(this, "Your HWID was bound to this machine.", "HWID Update", JOptionPane.INFORMATION_MESSAGE);
            }

            final HttpResponse<String> userDataResponse = Unirest.get(DiabloAPI.USER_URL)
                    .header("Authorization", sessionID)
                    .asString();

            if (userDataResponse.getStatus() != 200) {
                JOptionPane.showMessageDialog(this, "Failed to get user data.", "Error", JOptionPane.ERROR_MESSAGE);
                return;
            }

            final JsonObject userDataBody = Constants.GSON.fromJson(userDataResponse.getBody(), JsonObject.class);
            final String hwid = userDataBody.get("hwid").getAsString();

            if (!hwid.equals(HwidUtil.generateHwid())) {
                JOptionPane.showMessageDialog(this, "Your HWID does not match the one bound to this machine. Request a HWID reset if you have switched computers. ", "Error", JOptionPane.ERROR_MESSAGE);
                System.exit(0);
                return;
            } else {
                SwingUtilities.invokeLater(() -> {
                    final MainFrame mainFrame = new MainFrame(instance);
                    mainFrame.setVisible(true);
                });
            }
        });

        //TODO: Im not sure if this is the best way to do this, but it works. (change later)
        if (CACHED_LOGIN.exists()) {
            while(this.isDisplayable()) {
                try {
                    Thread.sleep(100);
                } catch (final Exception ex) {
                    ex.printStackTrace();
                }
            }
            this.Login.doClick();
            System.out.println("Cached login found, logging in...");
        }
    }
}

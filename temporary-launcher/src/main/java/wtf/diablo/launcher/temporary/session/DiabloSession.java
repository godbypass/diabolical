package wtf.diablo.launcher.temporary.session;

import by.radioegor146.nativeobfuscator.Native;
import com.google.gson.JsonObject;
import kong.unirest.HttpResponse;
import kong.unirest.Unirest;
import wtf.diablo.launcher.temporary.util.Constants;
import wtf.diablo.launcher.temporary.util.DiabloAPI;

@Native
public final class DiabloSession {
    private final String sessionID;

    private String username;
    private int uid;
    private DiabloRankEnum rank;

    public DiabloSession(final String sessionID) {
        this.sessionID = sessionID;
    }

    public void update() {
        final HttpResponse<String> response = Unirest.get(DiabloAPI.USER_URL)
                .header("Authorization", "Bearer " + this.sessionID)
                .asString();

        final JsonObject json = Constants.GSON.fromJson(response.getBody(), JsonObject.class);

        this.username = json.get("username").getAsString();
        this.uid = json.get("uid").getAsInt();

        final String stringRank = json.get("rank").getAsString();

        DiabloRankEnum rank = DiabloRankEnum.USER;
        switch (stringRank) {
            case "STAGING":
            case "ADMINISTRATOR":
                rank = DiabloRankEnum.STAGING;
                break;
            case "OWNER":
                rank = DiabloRankEnum.DEVELOPER;
                break;
        }

        this.rank = rank;
    }

    public String getSessionID() {
        return this.sessionID;
    }

    public String getUsername() {
        return this.username;
    }

    public int getId() {
        return this.uid;
    }

    public DiabloRankEnum getRank() {
        return this.rank;
    }
}

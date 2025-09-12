package wtf.diablo.launcher.session;

import by.radioegor146.nativeobfuscator.Native;

import java.util.ArrayList;
import java.util.List;

@Native
public enum DiabloRankEnum {
    USER(0, "RELEASE"),
    STAGING(1, "STAGING"),
    DEVELOPER(2, "DEBUG");

    private final String launchType;
    private final int permissionLevel;

    DiabloRankEnum(final int permissionLevel, final String launchType) {
        this.permissionLevel = permissionLevel;
        this.launchType = launchType;
    }


    public int getPermissionLevel() {
        return this.permissionLevel;
    }

    public String getLaunchType() {
        return this.launchType;
    }


    public static final DiabloRankEnum getRank(final int permissionLevel) {
        for (final DiabloRankEnum rank : values()) {
            if (rank.getPermissionLevel() == permissionLevel)
                return rank;
        }

        return null;
    }

    public static final List<DiabloRankEnum> getRanksFromPermissionLevel(final int permissionLevel) {
        final List<DiabloRankEnum> ranks = new ArrayList<>();

        for (final DiabloRankEnum rank : values()) {
            if (rank.getPermissionLevel() <= permissionLevel)
                ranks.add(rank);
        }

        return ranks;
    }

}

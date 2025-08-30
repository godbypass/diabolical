package wtf.diablo.launcher.util;

import by.radioegor146.nativeobfuscator.Native;
import com.google.gson.Gson;
import com.google.gson.GsonBuilder;

@Native
public final class Constants {
    private Constants() {}

    public static final Gson GSON = new GsonBuilder().setPrettyPrinting().create();
}

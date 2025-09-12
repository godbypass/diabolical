package wtf.diablo.hwid;

import by.radioegor146.nativeobfuscator.Native;

import java.util.Base64;

@Native
public final class CryptoUtil {
    private CryptoUtil() {}

    public static String toBase64(final String input) {
        return new String(Base64.getEncoder().encode(input.getBytes()));
    }
}

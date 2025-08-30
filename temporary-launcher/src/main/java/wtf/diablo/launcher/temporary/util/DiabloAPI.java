package wtf.diablo.launcher.temporary.util;

import by.radioegor146.nativeobfuscator.Native;

@Native
public final class DiabloAPI {
    private DiabloAPI() {}

    public static final String API_URL = "https://diablo.wtf/api";
    public static final String V1_URL = API_URL + "/v1";
    public static final String AUTH_URL = V1_URL + "/auth";

    public static final String LOGIN_URL = AUTH_URL + "/login";
    public static final String USER_URL = AUTH_URL + "/user";
    public static final String GENERATE_CONTENT_ID_URL = AUTH_URL + "/generateContentID";

    public static final String DOWNLOAD_URL = V1_URL + "/download";
    public static final String GET_URL = DOWNLOAD_URL + "/get";

    public static final String HWID_SET_URL = AUTH_URL + "/hwid/set";
    public static final String HWID_IS_SET_URL = AUTH_URL + "/hwid/isSet";

}

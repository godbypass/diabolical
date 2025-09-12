package wtf.diablo.bootstrap.util;

import by.radioegor146.nativeobfuscator.Native;
import kong.unirest.HttpResponse;
import kong.unirest.Unirest;

import javax.crypto.Cipher;
import javax.crypto.spec.SecretKeySpec;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLConnection;
import java.net.URLStreamHandler;
import java.nio.charset.StandardCharsets;
import java.util.HashMap;
import java.util.Map;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;

/**
 * The RemoteClassLoader class is used to load classes from a remote location (such as the web).
 *
 * @author dev-vince
 */
@Native
public class RemoteClassLoader extends ClassLoader {
    private final Map<String, byte[]> byteDataMap;

    public RemoteClassLoader(final ClassLoader parent) {
        super(parent);
        this.byteDataMap = new HashMap<>();
    }

    public void loadJar(final byte[] jarData) {
        this.byteDataMap.putAll(this.convertJarToByteData(jarData));
    }

    public void download(final String url, final String sessionID) {
        final HttpResponse<byte[]> response = Unirest.get(url).header("Authorization", sessionID).asBytes();
        if (response.isSuccess()) {
            this.loadJar(response.getBody());
        } else {
            throw new RuntimeException("Failed to download " + url);
        }
    }

    public void downloadAndDecrypt(final String url, final String sessionID) throws Exception {
        final HttpResponse<byte[]> response = Unirest.get(url).header("Authorization", sessionID).asBytes();
        if (response.isSuccess()) {
            final byte[] body = decrypt(response.getBody(), sessionID);

            this.loadJar(body);
        } else {
            throw new RuntimeException("Failed to download " + url);
        }
    }

    @Override
    protected Class<?> findClass(final String name) throws ClassNotFoundException {
        final byte[] byteData = this.byteDataMap.get(name.replace(".", "/") + ".class");

        if (byteData == null) {
            throw new ClassNotFoundException(name + " not found");
        }

        return this.defineClass(name, byteData, 0, byteData.length);
    }

    @Override
    protected URL findResource(final String name) {
        final byte[] byteData = this.byteDataMap.get(name);
        if (byteData != null) {
            try {
                return new URL(null, "bytes:///" + name, new Handler(byteData));
            } catch (final MalformedURLException e) {
                throw new RuntimeException(e);
            }
        }

        return null;
    }

    private Map<String, byte[]> convertJarToByteData(final byte[] jarData) {
        final Map<String, byte[]> byteDataMap = new HashMap<>();
        final byte[] buffer = new byte[1024];

        try (final ZipInputStream zipInputStream = new ZipInputStream(new ByteArrayInputStream(jarData))) {
            ZipEntry zipEntry;
            while ((zipEntry = zipInputStream.getNextEntry()) != null) {
                final ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                int len;
                while ((len = zipInputStream.read(buffer)) > 0) {
                    byteArrayOutputStream.write(buffer, 0, len);
                }

                byteDataMap.put(zipEntry.getName(), byteArrayOutputStream.toByteArray());
                System.out.println("Loaded " + zipEntry.getName() + " (" + byteArrayOutputStream.size() + " bytes)");
            }
        } catch (final IOException e) {
            e.printStackTrace();
        }

        return byteDataMap;
    }

    //this is needed in order to pass resource data
    private static class Handler extends URLStreamHandler {
        private final byte[] byteData;

        public Handler(byte[] byteData) {
            this.byteData = byteData;
        }

        @Override
        protected URLConnection openConnection(URL url) throws IOException {
            return new URLConnection(url) {
                @Override
                public void connect() throws IOException {}

                @Override
                public java.io.InputStream getInputStream() throws IOException {
                    return new java.io.ByteArrayInputStream(byteData);
                }
            };
        }
    }

    private static final String ALGORITHM = "AES";
    private static final String TRANSFORMATION = "AES/ECB/PKCS5Padding";

    private static byte[] decrypt(byte[] encrypted, String keyString) throws Exception {
        final byte[] key = keyString.getBytes(StandardCharsets.UTF_8);
        final SecretKeySpec secretKey = new SecretKeySpec(key, ALGORITHM);
        final Cipher cipher = Cipher.getInstance(TRANSFORMATION);
        cipher.init(Cipher.DECRYPT_MODE, secretKey);
        return cipher.doFinal(encrypted);
    }
}
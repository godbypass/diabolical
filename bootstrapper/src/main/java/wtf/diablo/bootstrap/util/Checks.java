package wtf.diablo.bootstrap.util;

import by.radioegor146.nativeobfuscator.Native;

import java.lang.management.ManagementFactory;
import java.lang.management.RuntimeMXBean;

@Native
public final class Checks {
    private Checks() {}

    public static boolean checkForAgent() {
        final RuntimeMXBean runtimeMXBean = ManagementFactory.getRuntimeMXBean();

        final String[] arguments = runtimeMXBean.getInputArguments().toString().split(" ");
        for (final String argument : arguments) {
            if (argument.contains("agentlib") || argument.contains("agentpath") || argument.contains("javaagent") || argument.contains("jdwp") || argument.contains("jdb") || argument.contains("jdebug") || argument.contains("jdi") || argument.contains("jvmti") || argument.contains("jdpa") || argument.contains("jvmpi")|| argument.contains("jvmd") || argument.contains("jvmv")) {
                return true;
            }
        }
        return false;
    }


}

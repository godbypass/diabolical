package wtf.diablo.hwid;

import by.radioegor146.nativeobfuscator.Native;
import oshi.SystemInfo;
import oshi.hardware.HardwareAbstractionLayer;

import java.util.HashMap;
import java.util.Map;

@Native
public final class HwidUtil {
    private HwidUtil() {}

    @Native
    public static String generateHwid() {
        final StringBuilder stringBuilder = new StringBuilder();

        final SystemInfo si = new SystemInfo();
        final HardwareAbstractionLayer hal = si.getHardware();

        final Map<String, String> identifiers = new HashMap<>();

        stringBuilder.append(hal.getComputerSystem().getManufacturer());
        identifiers.put("Manufacturer", hal.getComputerSystem().getManufacturer());

        stringBuilder.append(hal.getComputerSystem().getModel());
        identifiers.put("Model", hal.getComputerSystem().getModel());

        stringBuilder.append(hal.getComputerSystem().getSerialNumber());
        identifiers.put("SerialNumber", hal.getComputerSystem().getSerialNumber());

        stringBuilder.append(hal.getProcessor().getProcessorIdentifier().getName());
        identifiers.put("ProcessorName", hal.getProcessor().getProcessorIdentifier().getName());

        stringBuilder.append(hal.getProcessor().getProcessorIdentifier().getVendor());
        identifiers.put("ProcessorVendor", hal.getProcessor().getProcessorIdentifier().getVendor());

        stringBuilder.append(hal.getProcessor().getProcessorIdentifier().getFamily());
        identifiers.put("ProcessorFamily", hal.getProcessor().getProcessorIdentifier().getFamily());

        stringBuilder.append(hal.getProcessor().getProcessorIdentifier().getStepping());
        identifiers.put("ProcessorStepping", hal.getProcessor().getProcessorIdentifier().getStepping());

        stringBuilder.append(hal.getProcessor().getProcessorIdentifier().getIdentifier());
        identifiers.put("ProcessorIdentifier", hal.getProcessor().getProcessorIdentifier().getIdentifier());

        stringBuilder.append(hal.getProcessor().getProcessorIdentifier().getMicroarchitecture());
        identifiers.put("ProcessorMicroarchitecture", hal.getProcessor().getProcessorIdentifier().getMicroarchitecture());

        stringBuilder.append(hal.getProcessor().getProcessorIdentifier().getProcessorID());
        identifiers.put("ProcessorID", hal.getProcessor().getProcessorIdentifier().getProcessorID());

        stringBuilder.append(hal.getComputerSystem().getBaseboard().getManufacturer());
        identifiers.put("BaseboardManufacturer", hal.getComputerSystem().getBaseboard().getManufacturer());

        stringBuilder.append(hal.getComputerSystem().getBaseboard().getModel());
        identifiers.put("BaseboardModel", hal.getComputerSystem().getBaseboard().getModel());

        stringBuilder.append(hal.getComputerSystem().getBaseboard().getVersion());
        identifiers.put("BaseboardVersion", hal.getComputerSystem().getBaseboard().getVersion());

        stringBuilder.append(hal.getComputerSystem().getBaseboard().getSerialNumber());
        identifiers.put("BaseboardSerialNumber", hal.getComputerSystem().getBaseboard().getSerialNumber());

        stringBuilder.append(hal.getComputerSystem().getFirmware().getName());
        identifiers.put("FirmwareName", hal.getComputerSystem().getFirmware().getName());

        stringBuilder.append(hal.getComputerSystem().getFirmware().getManufacturer());
        identifiers.put("FirmwareManufacturer", hal.getComputerSystem().getFirmware().getManufacturer());

        stringBuilder.append(hal.getComputerSystem().getFirmware().getDescription());
        identifiers.put("FirmwareDescription", hal.getComputerSystem().getFirmware().getDescription());

        stringBuilder.append(hal.getComputerSystem().getFirmware().getVersion());
        identifiers.put("FirmwareVersion", hal.getComputerSystem().getFirmware().getVersion());

        stringBuilder.append(hal.getComputerSystem().getFirmware().getReleaseDate());
        identifiers.put("FirmwareReleaseDate", hal.getComputerSystem().getFirmware().getReleaseDate());

        stringBuilder.append(hal.getComputerSystem().getHardwareUUID());
        identifiers.put("HardwareUUID", hal.getComputerSystem().getHardwareUUID());

        stringBuilder.append(hal.getGraphicsCards().get(0).getDeviceId());
        identifiers.put("GraphicsDeviceId", hal.getGraphicsCards().get(0).getDeviceId());

        stringBuilder.append(hal.getGraphicsCards().get(0).getVendor());
        identifiers.put("GraphicsVendor", hal.getGraphicsCards().get(0).getVendor());

        stringBuilder.append(hal.getPowerSources().get(0).getDeviceName());
        identifiers.put("PowerSourceDeviceName", hal.getPowerSources().get(0).getDeviceName());

        stringBuilder.append(hal.getPowerSources().get(0).getManufacturer());
        identifiers.put("PowerSourceManufacturer", hal.getPowerSources().get(0).getManufacturer());

        stringBuilder.append(hal.getPowerSources().get(0).getSerialNumber());
        identifiers.put("PowerSourceSerialNumber", hal.getPowerSources().get(0).getSerialNumber());

        return CryptoUtil.toBase64(stringBuilder.toString());
    }
}

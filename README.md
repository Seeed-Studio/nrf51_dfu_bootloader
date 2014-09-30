nRF51822 DFU bootloader
=======================

This project contains a DFU bootloader for the Arch BLE. It can be built by gcc-arm-embedded toolchain.

### Requirements

+ Nordic SoftDevice S110 v7.0

### How to
```
git clone https://github.com/xiongyihui/nrf51_dfu_bootloader
cd /nrf51_dfu_bootloader/Board/arch_ble/device_firmware_updates/bootloader_gcc_ble/gcc
make release
```

Note that the bootloader address was set to 0x3C000 to give the bootloader only 16KB flash, so code optimization is enabled.

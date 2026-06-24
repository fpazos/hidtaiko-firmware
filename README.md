HIDtaiko RP2040 Firmware
========================

Overview
--------
This firmware turns an RP2040-based PCB into a Taiko no Tatsujin controller compatible with Nintendo Switch (HORI Tatacon profile) and as a keyboard HID. It follows the ITAIKO firmware approach: minimal device behavior focused on HID input reports and descriptor compatibility. No rumble/vibration or special LED features are required for operation on a Switch console.

Features
--------
- 3x3 digital button matrix (9 buttons) used for additional controls
- 4 analog drum inputs (ADC) for the Don/Ka pads
- USB HID: dual-mode operation — Keyboard HID and Switch gamepad HID (HORI VID/PID)
- Mode toggle via the matrix corner button (bottom-right / HOME position)

USB
---
- Vendor ID (VID): 0x0F0D (HORI)
- Product ID (PID): 0x00F0 (NSW-079 / Taiko profile)

Pinout (RP2040 GPIO numbers)
----------------------------
- ADC (drum pads): GP26, GP27, GP28, GP29 (ADC channels 0..3)
- Matrix rows: GP9 (row0), GP8 (row1), GP7 (row2)
- Matrix cols: GP6 (col0), GP5 (col1), GP4 (col2)
  - Matrix wiring expects diodes from column → row (columns drive HIGH, rows read with pull-down)
- Mode toggle: bottom-right matrix key (row2, col2 — GP7 read while GP4 driven)

Build (RP2040 Pico SDK / CMake)
-------------------------------
Requirements:
- CMake
- GNU Arm Embedded Toolchain (arm-none-eabi)
- make

Build steps:

```bash
cd /home/fpazos/repos/hidtaiko-firmware
rm -rf build && mkdir build && cd build
cmake -DPICO_SDK_FETCH_FROM_GIT=ON ..
make -j$(nproc)
```

Output: `build/src/keyboard.uf2` and `build/src/keyboard.elf` (paths may vary with CMake outputs).

Flashing to RP2040 (UF2)
------------------------
1. Put the RP2040 into BOOTSEL mode (hold BOOTSEL while plugging USB or press the board button if available).
2. Copy the generated `*.uf2` file to the mounted USB mass storage device.

Notes and compatibility
-----------------------
- This firmware focuses on HID descriptors and input mapping for Switch compatibility. It does not implement rumble/vibration or advanced Switch subcommands beyond basic HID input/outputs.
- The corner matrix key toggles between Keyboard HID and Switch HID modes. Some hosts may briefly re-enumerate USB when switching modes.
- If your PCB includes an indicator LED or vibration motor, those are optional and not required for console compatibility; they are not relied upon by the default firmware behavior.

License
-------
- See the repository `LICENSE` file for project licensing information.

Contributing
------------
Pull requests and issues welcome. When opening an issue, include:
- Board/PCB revision
- Exact wiring for matrix and ADC pins
- Steps to reproduce any problem

Contact
-------
Create an issue in the repository or contact the maintainer.

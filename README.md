# ZachsHackpad
A macropad with four switches, a rotary encoder, and an OLED screen. It uses KMK firmware for operations. This macropad is designed to supplement traditional keyboards for gaming and work by streamlining certain common operations and making them easier for the user to execute.

# Features:
3D Printed Case with a seperate top and bottom cover
128x32 OLED display
4 programmable keys

# Cad Model:
The whole case fits together with 4 M3 bolts for the top and bottom of the case to attach to each other
Only 2 seperate printed pieces, with the printed circuit board fitting on the inside with all the parts
The top cover has room for all the parts

![CAD Model Assembled](https://github.com/user-attachments/assets/e31a8d1e-c24f-4dbd-9644-d731c5f63887)

# PCB:

Included here is both the Schematic and PCB. Both the schematic and PCB were made in KiCad, with footprints from the OPL_KiCad_Library: https://github.com/Seeed-Studio/OPL_Kicad_Library/
Additional footprints were found a rotary encoder library: https://kicad.github.io/footprints/Rotary_Encoder and from a 0.91 inch OLED footprint found off of SnapMagic

Schematic: ![image](https://github.com/user-attachments/assets/a33b6a65-bc25-4e59-98e3-6e3a21ea9744)


PCB:


![image](https://github.com/user-attachments/assets/e162c9bf-95e0-4aa5-b03b-180b625809d4)

# Firmware:
This macropad uses Arduino .ino files for firmware. I used Arduino IDE to flash the firmware onto the chip itself. Adafruit TinyUSB and HID libraries needed to be installed to properly flash firmware onto the chip. Firmware is still a work in progress. Currently, the keys are working, with updates to the OLED display and rotary encoder upcoming.

# Bill of Materials:

* Seeed XIAO RP2040
* 4 MX-Style switches
* 4 Blank DSA Keycaps
* 1 EC11 Rotary Encoder
* 1 0.91 inch OLED display with pin order GND-VCC-SCL-SDA
* 1 3D-printed case (two seperate parts)




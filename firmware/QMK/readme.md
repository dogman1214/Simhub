# Simhub
A custom 12-key handwired macropad with a rotary encoder powered by a Seeed XIAO RP2040
* Keyboard Maintainer: Raghav Sharma
* Hardware Supported: Seeed XIAO RP2040, MX style switches, EC11 rotary encoder, custom pcb.
* Hardware Availability: https://hackpad.hackclub.com/

Make example for this keyboard, after setting up the build environment:
```
make Simhub:default
```

Flashing example for this keyboard:
```
make Simhub:default:flash
```

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.

# Bootloader
Enter the bootloader in 3 ways:
* Bootmagic reset: Hold down the top left key (the key at (0,0) and plug in the keyboard.
* Physical reset button: press the RESET button on the XIAO board while holding the BOOT button.
* Keycode in layout: Press the key mapped to QK_BOOT if it is available.

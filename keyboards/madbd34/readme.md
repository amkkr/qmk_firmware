# madbd3

![madbd3](imgur.com image replace me!)

<<<<<<< HEAD:keyboards/madbd34/readme.md
*A short description of the keyboard/project*

* Keyboard Maintainer: [amkkr](https://github.com/amkkr)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*
=======
* Keyboard Maintainer: [Kyle McCreery](https://github.com/kylemccreery)
* Hardware Supported: Mokulua v1.3
* Hardware Availability: https://mechwild.com/product/mokulua/
>>>>>>> master:keyboards/mechwild/mokulua/readme.md

Make example for this keyboard (after setting up your build environment):

    make madbd3:default

Flashing example for this keyboard:

    make madbd3:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

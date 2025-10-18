# Squikey

![handwired/squikey](https://github.com/Bastardkb/Scylla/blob/main/pics/2.jpg)

QMK firmware for the Squikey keyboard, a 4x6+5 handwired keyboard with hotswap MX switches.

* Keyboard Maintainer: [Trilowy](https://github.com/trilowy)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*


## How to install it?

Brand new to QMK? Start with the [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.

Once QMK setup is done, clone this repository inside your existing [qmk_firmware](https://github.com/qmk/qmk_firmware) repository:

```sh
git submodule add https://github.com/trilowy/squikey-qmk.git keyboards/handwired/squikey
```

Build the default keymap:

```sh
make handwired/squikey:default
```

Flash the default keymap:

```sh
make handwired/squikey:default:flash
```


## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

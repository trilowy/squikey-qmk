# Squikey

![handwired/squikey](https://github.com/Bastardkb/Scylla/blob/main/pics/2.jpg)

QMK firmware for the Squikey keyboard, a 4x6+5 handwired keyboard with hotswap MX switches.

* Keyboard Maintainer: [Trilowy](https://github.com/trilowy)
* Hardware Supported: Pro Micro RP2040
* Hardware Availability: TODO list of components


## How to install it?

Brand new to QMK? Start with the [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.

Once QMK setup is done, we will use [qmk_userspace](https://github.com/qmk/qmk_userspace).

1. Clone this repository to your machine.
1. Enable userspace in QMK config using:
   ```sh
   qmk config user.overlay_dir="$(realpath squikey-qmk)"
   ```
1. Add a new keymap for your board using:
   ```sh
   qmk new-keymap
   ```
   * This will create a new keymap in the `keyboards` directory, in the same location that would normally be used in the main QMK repository. For example, if you wanted to add a keymap for the Planck, it will be created in `keyboards/planck/keymaps/<your keymap name>`
   * You can also create a new keymap using:
     ```sh
     qmk new-keymap -kb <your_keyboard> -km <your_keymap>
     ```
   * Alternatively, add your keymap manually by placing it in the location specified above.
   * `layouts/<layout name>/<your keymap name>/keymap.*` is also supported if you prefer the layout system
1. Add your keymap(s) to the build by running:
   ```sh
   qmk userspace-add -kb <your_keyboard> -km <your_keymap>
   ```
   Ex:
   ```sh
   qmk userspace-add -kb handwired/squikey -km trilowy
   ```
   * This will automatically update your `qmk.json` file
   * To delete:
     ```sh
     qmk userspace-remove -kb <your_keyboard> -km <your_keymap>
     ```
   * Listing the build targets can be done with:
     ```sh
     qmk userspace-list
     ```
1. To flash the default keymap, unplug the keyboard and launch:
   ```sh
   qmk flash -kb handwired/squikey -km default
   ```
1. When the message `Waiting for drive to deploy...` appears, hold the "boot" button while plugging the keyboard, to go into bootloader mode.
   It should see the keyboard as a USB drive and flash it.
1. Unplug and plug the keyboard and enjoy!


## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available

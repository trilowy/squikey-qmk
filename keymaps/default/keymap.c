// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _BASE = 0,
    _SYM = 1,
    _NAV = 2,
    _NUM = 3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │Del│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │CpL│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Ctl│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Tab│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │Ent│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │GUI│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Alt│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *             ┌───┬───┬───┐       ┌───┬───┬───┐
      *             │Del│   │Bsp│       │Sft│Sym│Esc│
      *             └───┼───┼───┤       ├───┼───┼───┘
      *                 │   │   │       │   │   │
      *                 └───┴───┘       └───┴───┘
      */
    [_BASE] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_CAPS, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LCTL,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LGUI, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LALT,

           LCTL_T(KC_DEL), LT(_NAV,KC_SPC), LALT_T(KC_BSPC),           KC_LSFT, MO(_SYM), LT(_NUM,KC_ESC),
                                            KC_SPC, KC_BSPC,           KC_SPC,  KC_ESC
    )
};

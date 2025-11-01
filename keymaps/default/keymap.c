// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "keymap_ergol.h"

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
      * │CpL│ Q │ C │ O │ P │ W │       │ J │ M │ D │ ★ │ Y │Ctl│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Tab│ A │ S │ E │ N │ F │       │ L │ R │ T │ I │ U │Ent│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │GUI│ Z │ X │ - │ V │ B │       │ . │ H │ G │ , │ K │Alt│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *             ┌───┬───┬───┐       ┌───┬───┬───┐
      *             │Del│   │Bsp│       │Sft│Sym│Esc│
      *             └───┼───┼───┤       ├───┼───┼───┘
      *                 │   │Bsp│       │   │Agr│
      *                 └───┴───┘       └───┴───┘
      */
    [_BASE] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_CAPS, EL_Q,    EL_C,    EL_O,    EL_P,    EL_W,             EL_J,    EL_M,    EL_D,    EL_1DK,  EL_Y,    KC_LCTL,
        KC_TAB,  EL_A,    EL_S,    EL_E,    EL_N,    EL_F,             EL_L,    EL_R,    EL_T,    EL_I,    EL_U,    KC_ENT,
        KC_LGUI, EL_Z,    EL_X,    EL_MINS, EL_V,    EL_B,             EL_DOT,  EL_H,    EL_G,    EL_COMM, EL_K,    KC_LALT,

           LCTL_T(KC_DEL), LT(_NAV,KC_SPC), LALT_T(KC_BSPC),           KC_LSFT, MO(_SYM), LT(_NUM,KC_ESC),
                                            KC_SPC, KC_BSPC,           KC_SPC,  KC_RALT
    ),

     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │   │   │   │   │   │   │       │   │   │   │   │   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │ ^ │ < │ > │ $ │ % │       │ @ │ & │ * │ ' │ ` │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │ { │ ( │ ) │ } │ = │       │ \ │ + │ - │ / │ " │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │ ~ │ [ │ ] │ _ │ # │       │ | │ ! │ ; │ : │ ? │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *             ┌───┬───┬───┐       ┌───┬───┬───┐
      *             │   │   │   │       │   │   │   │
      *             └───┼───┼───┤       ├───┼───┼───┘
      *                 │   │   │       │   │   │
      *                 └───┴───┘       └───┴───┘
      */
    [_SYM] = LAYOUT(
        _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______,
        _______, EL_CIRC, EL_LABK, EL_RABK, EL_DLR,  EL_PERC,          EL_AT,   EL_AMPR, EL_ASTR, EL_QUOT, EL_GRV,  _______,
        _______, EL_LCBR, EL_LPRN, EL_RPRN, EL_RCBR, EL_EQL,           EL_BSLS, EL_PLUS, EL_MINS, EL_SLSH, EL_DQUO, _______,
        _______, EL_TILD, EL_LBRC, EL_RBRC, EL_UNDS, EL_HASH,          EL_PIPE, EL_EXLM, EL_SCLN, EL_COLN, EL_QUES, _______,

                                   _______, _______, _______,          _______, _______, _______,
                                            _______, _______,          _______, _______
    ),
};

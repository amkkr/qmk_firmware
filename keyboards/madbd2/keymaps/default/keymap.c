// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T,                                  KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_BSPC,
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G,                                  KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,                                  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
                        KC_LCTL, KC_LGUI, LT(1,KC_SPC),           LT(2, KC_ESC), KC_RALT, MO(1)
    ),

    [1] = LAYOUT(
        KC_TAB,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                             KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, KC_ENT,
        KC_LSFT, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_SPC,                            KC_GRV,  KC_QUOT, KC_COMM, KC_DOT,  KC_SLSH,
                        KC_LCTL, KC_LGUI, LT(1,KC_SPC),           LT(3, KC_ESC), KC_RALT,KC_NO
    ),

    [2] = LAYOUT(
        KC_TAB,  KC_NO, KC_NO, KC_NO, KC_END,  KC_NO,                           KC_HOME, KC_NO,   KC_NO, KC_NO,   KC_NO, KC_DEL,
        KC_LCTL, KC_NO, KC_NO, KC_NO, KC_PGDN, KC_NO,                           KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_ENT,
        KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO,   KC_PGUP,                         KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_NO,
                        KC_LCTL, KC_LGUI, LT(3,KC_SPC),           LT(2, KC_ESC), KC_RALT,KC_NO
    ),

    [3] = LAYOUT(
        KC_F1, KC_F2,   KC_F3,   KC_F4,   KC_F5, KC_F6,                         KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,
        KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_NO,                         KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO,  KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,                         KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO,
                        KC_LCTL, KC_LGUI, LT(1,KC_SPC),           LT(2, KC_ESC), KC_RALT,KC_NO
    )

};



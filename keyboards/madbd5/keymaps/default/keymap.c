// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NO,   KC_PAST, KC_PMNS, KC_PPLS, KC_W,    KC_2,    KC_3,    KC_NO,   KC_NO,   KC_NO,
        KC_TAB,  KC_1,    KC_5,    KC_NO,   KC_NO,   KC_BSPC,
        KC_P7,   KC_P8,   KC_P9,   KC_PSLS, KC_S,    KC_D,    KC_9,    KC_J,    KC_K,    KC_L,
        KC_LCTL, KC_A,    KC_0,    KC_H,    KC_SCLN, KC_ENT,
        KC_P4,   KC_P5,   KC_P6,   KC_EQL,  KC_X,    KC_C,    KC_V,    KC_QUOT, KC_COMM, KC_DOT,
        KC_LSFT, KC_Z,    KC_B,    KC_GRV,  KC_SLSH,
        KC_P1,   KC_P2,   KC_P3,   KC_COMM, KC_LCTL, MO(1),   KC_LGUI, KC_RALT, LT(1, KC_SPC), LT(2, KC_ESC),
        KC_P0,   KC_LSFT, KC_RSFT
    ),

    [1] = LAYOUT(
        KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_DEL,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_EQL,  KC_LBRC, KC_RBRC,
        KC_NO,   KC_NO,   KC_NO,   KC_MINS, KC_BSLS, KC_NO,
        KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS,
        KC_NO,   KC_NO,   KC_NO
    ),

    [2] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_END,  KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_DOWN, KC_UP,   KC_RGHT,
        KC_NO,   KC_NO,   KC_NO,   KC_LEFT, KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_PGDN, KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_PGUP, KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LALT, KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS,
        KC_NO,   KC_NO,   KC_NO
    )
};

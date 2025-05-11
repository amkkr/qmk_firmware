// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        LGUI(KC_A),LGUI(KC_Y),LGUI(KC_Z),
        LGUI(KC_V),LGUI(KC_C),LGUI(KC_X)
    )
};

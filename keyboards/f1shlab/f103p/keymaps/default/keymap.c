// Copyright 2024 %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_1, KC_2,
        KC_3, KC_4
    ),
    [1] = LAYOUT(
        KC_1, KC_2,
        KC_3, KC_4
    ),
    [2] = LAYOUT(
        KC_1, KC_2,
        KC_3, KC_4
    ),
    [3] = LAYOUT(
        KC_1, KC_2,
        KC_3, KC_4
    )
};

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//     [0] = LAYOUT(
//         KC_1, KC_2, KC_A, KC_B,
//         KC_3, KC_4, KC_C, KC_D
//     ),
//     [1] = LAYOUT(
//         KC_1, KC_2, KC_A, KC_B,
//         KC_3, KC_4, KC_C, KC_D
//     ),
//     [2] = LAYOUT(
//         KC_1, KC_2, KC_A, KC_B,
//         KC_3, KC_4, KC_C, KC_D
//     ),
//     [3] = LAYOUT(
//         KC_1, KC_2, KC_A, KC_B,
//         KC_3, KC_4, KC_C, KC_D
//     )
// };

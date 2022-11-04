/*
Copyright 2022 F1shlab

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "orange65.h"

// const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS (
//   {0,1,HSV_BLUE}
// );

// const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
//   my_capslock_layer
// );

// void keyboard_post_init_user(void){
//   //enable th led my_rgb_layers
//   rgblight_layers = my_rgb_layers;
// }

// bool led_update_user(led_t led_state) {
//     rgblight_set_layer_state(0, led_state.caps_lock);
//     return true;
// }

// Light LEDs 1 blue when caps lock is active. Hard to ignore!
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_BLUE}      // Light 1 LEDs
);
// Light LEDs 2 in blue  when num lock is active
const rgblight_segment_t PROGMEM my_numlock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 1, HSV_BLUE}
);
// Light LEDs 3 in blue when scorll lock is active
const rgblight_segment_t PROGMEM my_scrlock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 1, HSV_BLUE}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_capslock_layer,
    my_numlock_layer,    // Overrides caps lock layer
    my_scrlock_layer    // Overrides other layers
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    rgblight_set_layer_state(1, led_state.num_lock);
    rgblight_set_layer_state(2, led_state.scroll_lock);
    return true;
}

// bool led_update_user(led_t led_state) {
//     rgblight_set_layer_state(1, led_state.num_lock);
//     return true;
// }

// bool led_update_user(led_t led_state) {
//     rgblight_set_layer_state(2, led_state.scroll_lock);
//     return true;
// }


RGB_MATRIX_EFFECT(solid_esc)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

// Solid ESC

static bool solid_esc(effect_params_t* params) {
    HSV hsv = rgb_matrix_config.hsv;
    RGB rgb = hsv_to_rgb(hsv);
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
        if (i == 0 || i == 16 || i == 20 || i == 39 || i == 40 ) {
            rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        } else {
            rgb_matrix_set_color(i, 0x00, 0x00, 0x00);
        }
    }
    return led_max < RGB_MATRIX_LED_COUNT;
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS


RGB_MATRIX_EFFECT(solid_esc)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

// Solid ESC

static bool solid_esc(effect_params_t* params) {
    HSV hsv = rgb_matrix_config.hsv;
    RGB rgb = hsv_to_rgb(hsv);
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
        if (i == 0 || i == 16 || i == 20 || i == 39 || i == 40 ) {
            rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        } else {
            rgb_matrix_set_color(i, 0x00, 0x00, 0x00);
        }
    }
    return led_max < RGB_MATRIX_LED_COUNT;
}

// Solid Reactive Simple

static HSV SOLID_REACTIVE_SIMPLE_math(HSV hsv, uint16_t offset) {
#ifdef RGB_MATRIX_SOLID_REACTIVE_GRADIENT_MODE
    hsv.h = scale16by8(g_rgb_timer, qadd8(rgb_matrix_config.speed, 8) >> 4);
#endif
    hsv.v = scale8(255 - offset, hsv.v);
    return hsv;
}

bool SOLID_REACTIVE_SIMPLE(effect_params_t* params) {
    return effect_runner_reactive(params, &SOLID_REACTIVE_SIMPLE_math);
}


#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS

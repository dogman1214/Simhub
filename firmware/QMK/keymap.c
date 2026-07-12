#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_7,    KC_8,    KC_9,
        KC_4,    KC_5,    KC_6,
        KC_1,    KC_2,    KC_3,
        KC_MUTE, KC_0,    KC_ENT
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif

void keyboard_post_init_user(void) {
    setPinInputHigh(GP4);
}

void matrix_scan_user(void) {
    static bool last_button_state = false;
    bool current_button_state = !readPin(GP4);

    if (current_button_state != last_button_state) {
        if (current_button_state) {
            tap_code(KC_MEDIA_PLAY_PAUSE);
        }
        last_button_state = current_button_state;
    }
}

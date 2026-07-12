#include QMK_KEYBOARD_H

enum custom_layers {
    _DESKTOP = 0,
    _GAMING = 1
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DESKTOP] = LAYOUT(
        KC_7,    KC_8,    KC_9,
        KC_4,    KC_5,    KC_6,
        KC_1,    KC_2,    KC_3,
        KC_MUTE, KC_0,    KC_ENT
    ),
    [_GAMING] = LAYOUT(
        KC_F13,  KC_F14,  KC_F15,
        KC_F16,  KC_F17,  KC_F18,
        KC_F19,  KC_F20,  KC_F21,
        KC_F22,  KC_F23,  KC_F24
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_DESKTOP] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_GAMING]  = { ENCODER_CCW_CW(KC_PGDN, KC_PGUP) }
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
            layer_invert(_GAMING);
        }
        last_button_state = current_button_state;
    }
}

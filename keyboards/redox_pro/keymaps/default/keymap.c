
#include "redox_pro.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,    KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_BSPC,
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,    KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_BSLS,
	KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    KC_H,   KC_J,   KC_K,    KC_L,    KC_EQL,  KC_ENT,
	KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,    KC_N,   KC_M,   KC_SCLN, KC_SLSH, KC_QUOT, KC_RSFT,
	KC_LCTL, KC_GRV,  KC_LALT, KC_MINS, KC_LGUI, KC_SPC, TT(2), KC_RGUI, KC_COMM, KC_DOT, KC_LBRC,  KC_RBRC,
                               KC_MUTE, KC_HOME,KC_END,  KC_PGUP, KC_PGDN, KC_MUTE,
                                                KC_ENT,  TT(1)
    ),
	[1] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,    KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_BSPC,
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,    KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_BSLS,
	KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    KC_H,   KC_J,   KC_K,    KC_L,    KC_QUOT, KC_ENT,
	KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,    KC_N,   KC_M,   KC_SCLN, KC_SLSH, KC_UP,   KC_RSFT,
	KC_LCTL, KC_GRV,  KC_LALT, KC_MINS, KC_LGUI, KC_SPC, TT(2), KC_RGUI, KC_COMM, KC_DOT, KC_LBRC, KC_RBRC,
                               KC_MUTE, KC_HOME,KC_END,  KC_PGUP, KC_PGDN, KC_MUTE,
                                                KC_ENT,  TT(1)
    ),
	[2] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,    KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_BSPC,
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,    KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_BSLS,
	KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    KC_H,   KC_J,   KC_K,    KC_L,    KC_QUOT, KC_ENT,
	KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,    KC_N,   KC_M,   KC_SCLN, KC_SLSH, KC_UP,   KC_RSFT,
	KC_LCTL, KC_GRV,  KC_LALT, KC_MINS, KC_LGUI, KC_SPC, TT(2), KC_RGUI, KC_COMM, KC_DOT, KC_LBRC, KC_RBRC,
                               KC_MUTE, KC_HOME,KC_END,  KC_PGUP, KC_PGDN, KC_MUTE,
                                                KC_ENT,  TT(1)
    )
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
}

#include "ergosnm.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [0] = LAYOUT(
   KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,                                                        KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_BSLS,
   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,                                                        KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_BSPC,
   KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,                                                        KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B, KC_PGUP, KC_PGDN, KC_BTN3, XXXXXXX, XXXXXXX, XXXXXXX, KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
   KC_LALT, KC_LGUI, KC_HOME, KC_END,  MO(1),        KC_SPC,   MO(2),   KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX,         KC_ENT, MO(1),   KC_LBRC, KC_RBRC, MO(3) 
  ),

  [1] = LAYOUT(
   KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,                                                        KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_BSLS,
   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,                                                        KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_BSPC,
   KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,                                                        KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B, KC_BTN1, KC_BTN2, KC_BTN3, XXXXXXX, XXXXXXX, XXXXXXX, KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
   KC_LALT, KC_LGUI, KC_HOME, KC_END,  MO(1),        KC_SPC,   MO(2),   KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX,         KC_ENT, MO(1),   KC_LBRC, KC_RBRC, MO(3) 
  ),

  [2] = LAYOUT(
   KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,                                                        KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_BSLS,
   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,                                                        KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_BSPC,
   KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,                                                        KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B, KC_BTN1, KC_BTN2, KC_BTN3, XXXXXXX, XXXXXXX, XXXXXXX, KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
   KC_LALT, KC_LGUI, KC_HOME, KC_END,  MO(1),        KC_SPC,   MO(2),   KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX,         KC_ENT, MO(1),   KC_LBRC, KC_RBRC, MO(3) 
  ),

  [3] = LAYOUT(
   KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,                                                        KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_BSLS,
   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,                                                        KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_BSPC,
   KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,                                                        KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B, KC_BTN1, KC_BTN2, KC_BTN3, XXXXXXX, XXXXXXX, XXXXXXX, KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
   KC_LALT, KC_LGUI, KC_HOME, KC_END,  MO(1),        KC_SPC,   MO(2),   KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX,         KC_ENT, MO(1),   KC_LBRC, KC_RBRC, MO(3) 
  )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_UP, KC_DOWN)},
    [1] = { ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_UP, KC_DOWN)},
    [2] = { ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_UP, KC_DOWN)},
    [3] = { ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_UP, KC_DOWN)},
};
#else
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* 1st encoder */
        if (clockwise) {
            tap_code(KC_UP);
        } else {
            tap_code(KC_DOWN);
        }
    }
    else if (index == 1) { /* 2nd encoder */
        if (clockwise) {
            tap_code(KC_UP);
        } else {
            tap_code(KC_DOWN);
        }
    }

		return false;
}
#endif

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}


void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}
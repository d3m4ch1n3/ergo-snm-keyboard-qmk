#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    ZiTe
#define PRODUCT         ErgoSNM

/* key matrix size */
#define MATRIX_ROWS (5 * 2)
#define MATRIX_COLS (7)

/* Key matrix pins. */
#define MATRIX_ROW_PINS { D3, D2, D4, C6, D7 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, E6, B4, B5 }
#define MATRIX_ROW_PINS_RIGHT { D3, D2, D4, C6, D7 }
#define MATRIX_COL_PINS_RIGHT { F4, F5, F6, F7, E6, B4, B0 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { D0 }
#define ENCODERS_PAD_B { B0 }
#define ENCODER_RESOLUTIONS { 4 }
#define ENCODERS_PAD_A_RIGHT { D0 }
#define ENCODERS_PAD_B_RIGHT { B5 }
#define ENCODER_RESOLUTIONS_RIGHT { 4 }
// #define ENCODER_DIRECTION_FLIP

/* Pointing device */
#define PMW33XX_CS_PIN B6
#define PMW33XX_CPI 1200 // The CPI range is 100-12000, in increments of 100. Defaults to 1600 CPI.
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_RIGHT

/* Split keyboard */
#define EE_HANDS
// #define MASTER_LEFT
// #define MASTER_RIGHT
#define SOFT_SERIAL_PIN D1
#define SPLIT_POINTING_ENABLE

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

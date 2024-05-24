#ifndef CONFIG_H
#define CONFIG_H

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    EdipraTech
#define PRODUCT         keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 8

/* key matrix pins */
#define MATRIX_ROW_PINS { B5, B6, B7, B8, B9 }
#define MATRIX_COL_PINS { A3, A4, A5, A6, A7, B0, A1, A2 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#endif
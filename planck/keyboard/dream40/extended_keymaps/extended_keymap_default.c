#include "extended_keymap_common.h"

/* See keyboard layout editor */
/* http://www.keyboard-layout-editor.com/#/gists/f4b17e88b90f39f2b84d */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = { /* Qwerty */
{KC_ESC,  KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
{FUNC(5),  KC_A,    KC_S,    KC_D,     KC_F,    KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_NO,   FUNC(8)},
{KC_LSFT, KC_Z,    KC_X,     KC_C,     KC_V,    KC_B,   KC_N,    KC_M,    KC_NO,   KC_COMM, KC_DOT,  KC_RSFT},
{KC_LCTL, KC_LALT, KC_LGUI,  KC_SPC,   KC_NO,   KC_NO,  FUNC(6), KC_NO,   FUNC(9), KC_NO,   FUNC(7), FUNC(10)}
},

[1] = { /* Cursor */
{KC_TRNS, KC_BSPC, KC_NO,   KC_UP,   KC_NO,   KC_HOME, KC_PGUP, KC_NO,   KC_UP,   KC_NO,   FUNC(15), FUNC(14)},
{KC_TRNS, KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,    KC_DEL},
{KC_TRNS, KC_DEL,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_TRNS},
{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_TRNS, KC_NO,   KC_TRNS, KC_NO,   KC_TRNS,  KC_TRNS}
},

[2] = { /* Punctuation */
{KC_TRNS, KC_SLSH, S(KC_1), S(KC_2),    S(KC_3),    S(KC_8),   S(KC_QUOT), S(KC_9),    S(KC_0),    S(KC_GRV),  KC_BSLS, KC_TRNS},
{KC_TRNS, KC_MINS, S(KC_4), S(KC_5),    S(KC_6),    S(KC_EQL), KC_QUOT,    S(KC_LBRC), S(KC_RBRC), S(KC_SLSH), KC_NO,   KC_TRNS},
{KC_TRNS, KC_EQL,  S(KC_7), S(KC_BSLS), S(KC_MINS), KC_GRV,    KC_LBRC,    KC_RBRC,    KC_NO,      S(KC_SCLN), KC_SCLN, KC_TRNS},
{KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC,    KC_NO,      KC_NO,     KC_DOT,    KC_NO,      KC_TRNS,    KC_NO,      KC_TRNS, KC_TRNS}
},

[3] = { /* Number */
{KC_TRNS, KC_SLSH, KC_1, KC_2,    KC_3,  S(KC_8),   S(KC_QUOT), S(KC_9),    S(KC_0),    S(KC_GRV),  KC_BSLS, KC_TRNS},
{KC_TRNS, KC_MINS, KC_4, KC_5,    KC_6,  S(KC_EQL), KC_QUOT,    S(KC_LBRC), S(KC_RBRC), S(KC_SLSH), KC_NO,   KC_TRNS},
{KC_TRNS, KC_EQL,  KC_7, KC_8,    KC_9,  KC_GRV,    KC_LBRC,    KC_RBRC,    KC_NO,      S(KC_SCLN), KC_SCLN, KC_TRNS},
{KC_TRNS, KC_TRNS, KC_TRNS, KC_0, KC_NO, KC_NO,     KC_DOT,     KC_NO,      KC_TRNS,    KC_NO,      KC_TRNS, KC_TRNS}
},

[4] = { /* Function */
{KC_TRNS, KC_F10,   KC_F1,   KC_F2,   KC_F3,  KC_NO,    KC_NO,    KC_PSCR, KC_SLCK, KC_PAUS, KC_INS,  FUNC(16)},
{KC_CAPS, KC_F11,   KC_F4,   KC_F5,   KC_F6,  KC_NO,    KC_NO,    KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,   KC_TRNS},
{KC_TRNS, KC_F12,   KC_F7,   KC_F8,   KC_F9,  FUNC(17), FUNC(18), KC_MUTE, KC_NO,   KC_VOLD, KC_VOLU, KC_TRNS},
{KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_NO, KC_NO,     KC_TRNS,  KC_NO,   KC_TRNS, KC_NO,   KC_TRNS, KC_TRNS}
},

[5] = { /* Mouse */
{KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_WH_L, KC_WH_D,  KC_MS_U, KC_WH_U, KC_WH_R, KC_TRNS},
{KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,   KC_BTN2, KC_MS_L,  KC_MS_D, KC_MS_R, KC_NO,   KC_TRNS},
{KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_BTN5, KC_BTN3, KC_BTN4,  KC_NO,   KC_NO,   KC_NO,   KC_TRNS},
{KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO,   KC_BTN1, KC_NO,    KC_TRNS, KC_NO,   KC_TRNS, KC_TRNS}
}
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(1),                                      // Cursor
    [2] = ACTION_LAYER_MOMENTARY(2),                                      // Punctuation
    [3] = ACTION_LAYER_MOMENTARY(3),                                      // Number
    [4] = ACTION_LAYER_MOMENTARY(4),                                      // Function
    [5] = ACTION_LAYER_TAP_KEY(3, KC_TAB),                                // TabFn Number
    [6] = ACTION_LAYER_TAP_KEY(1, KC_SPC),                                // SpaceFn Cursor
    [7] = ACTION_LAYER_TAP_KEY(4, KC_PAUS),                               // PauseFn Function
    [8] = ACTION_LAYER_TAP_KEY(2, KC_ENT),                               // EnterFn Punctuation
    [9] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_SLSH),                          // Hold=Ctrl, Tap=Slash
    [10] = ACTION_MODS_TAP_KEY(MOD_LCTL|MOD_LSFT|MOD_LALT, KC_BSLS),      // Hold=Ctrl+Alt+Shift, Tap=Backslash
    [11] = ACTION_MODS_TAP_KEY(MOD_LCTL|MOD_LALT, KC_ESC),                // Hold=Ctrl+Alt, Tap=Esc
    [12] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_MUTE),                        // Hold=Ctrl, Tap=Mute
    [13] = ACTION_MODS(MOD_LCTL|MOD_LSFT|MOD_LALT),                       // Ctrl+Shift+Alt
    [14] = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_DEL),                    // Ctrl+Alt+Del
    [15] = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_INS),                    // Ctrl+Alt+Ins
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_INS),                             // Shift+Insert
    [17] = ACTION_MODS_KEY(MOD_LALT, KC_3),                               // Alt+3=£
    [18] = ACTION_MODS_KEY(MOD_LSFT|MOD_LALT, KC_2),                      // Shift+Alt+2=€
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
    switch(id) {
      case 0:
        return MACRODOWN(T(CM_T), END);
      break;
    }
    return MACRO_NONE;
};


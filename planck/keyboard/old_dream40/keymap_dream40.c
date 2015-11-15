#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* 0: qwerty */
    KEYMAP(
        ESC, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   PAUS, \
        TAB, A,   S,   D,   F,   G,   H,   J,   K,   L,        ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT,      RSFT, \
        LALT,LGUI,LCTL,     SPC,           SPC,      RCTL,RCTL,RCTL),

    /* 1: punctuations */
    KEYMAP(
        ESC, SLSH, S(1), S(2),    S(3),    S(8),    S(SCLN), S(QUOT), S(9),    S(0),   DEL, \
        TAB, MINS, S(4), S(5),    S(6),    S(EQL),  SCLN,    QUOT,    S(LBRC), S(RBRC),        ENT,  \
        LSFT,EQL,  S(7), S(BSLS), S(SLSH), S(MINS), S(GRV),  GRV,   COMM,DOT,      RSFT, \
        LALT,LGUI, LCTL, SPC,     SPC,     RCTL,RCTL,RCTL),
};
const uint16_t PROGMEM fn_actions[] = {};




{KC_TRNS, S(KC_1), S(KC_2),    S(KC_3), S(KC_8),    KC_SLSH, S(KC_SCLN),   S(KC_QUOT), S(KC_9),    S(KC_0),    S(KC_SLSH),  KC_DEL},
{KC_TRNS, S(KC_4), S(KC_5),    S(KC_6), S(KC_EQL),  KC_MINS, KC_SCLN,      KC_QUOT,    S(KC_LBRC), S(KC_RBRC), KC_NO,       KC_TRNS},
{KC_TRNS, S(KC_7), S(KC_BSLS), KC_BSLS, KC_EQL,     KC_DOT,  S(KC_GRV),    KC_GRV,     KC_LBRC,    KC_RBRC,    KC_TRNS,     KC_TRNS},
{FUNC(4), KC_TRNS, KC_TRNS,    KC_TRNS, S(KC_MINS), KC_TRNS, KC_TRNS,      FUNC(1),    FUNC(2),    KC_TRNS,    KC_TRNS,     KC_TRNS}
},

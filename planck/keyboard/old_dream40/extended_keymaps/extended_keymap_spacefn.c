#include "extended_keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Esc  Q    W    E    R    T    Y    U    I    O    P    Back */
/* Tab  A    S    D    F    G    H    J    K    L    ;    Entr */
/* LSft Z    X    C    V    B    N    M    ,    .    /    RSft */
/* Fn4  Alt  Hypr Supr Ctrl Spc  Spc  Meta Left Down Up   Rght */

[0] = { /* Qwerty */
{KC_ESC,  KC_Q,    KC_W,             KC_E,    KC_R,    KC_T,   KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
{FUNC(6),  KC_A,    KC_S,            KC_D,    KC_F,    KC_G,   KC_H,     KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT},
{KC_LSFT, KC_Z,    KC_X,             KC_C,    KC_V,    KC_B,   KC_N,     KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT},
{FUNC(4), KC_LALT, S(LCTL(KC_LALT)), KC_LGUI, KC_LCTL, FUNC(5), FUNC(5), FUNC(1), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}
},

/* Esc  !    @    #    *    /    %    "    (    )    Ins  Del  */
/* Tab  $    %    ^    +    -    ^    '    {    }    '    Entr */
/* LSft &    |    \    =    .    ~    `    [    ]    "    RSft */
/* Fn4  Alt  _    Supr Ctrl Spc  Spc  Meta Left Down Up   Rght */

[1] = { /* Symbols */
{KC_TRNS, S(KC_1), S(KC_2),    S(KC_3), S(KC_8),   KC_SLSH, S(KC_5),   S(KC_QUOT), S(KC_9),    S(KC_0),    KC_INS,     KC_DEL},
{FUNC(6), S(KC_4), S(KC_5),    S(KC_6), S(KC_EQL), KC_MINS, S(KC_6),   KC_QUOT,    S(KC_LBRC), S(KC_RBRC), KC_QUOT,    KC_TRNS},
{KC_TRNS, S(KC_7), S(KC_BSLS), KC_BSLS, KC_EQL,    KC_DOT,  S(KC_GRV), KC_GRV,     KC_LBRC,    KC_RBRC,    S(KC_QUOT), KC_TRNS},
{FUNC(4), KC_LALT, S(KC_MINS),    KC_LGUI, KC_LCTL,   FUNC(5), FUNC(5),   FUNC(1),    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT}
},


/* Esc  1    2    3    *    /    %    "    (    )    Ins  Del  */
/* Tab  4    5    6    +    -    ^    '    {    }    '    Entr */
/* LSft 7    8    9    =    .    ~    `    [    ]    "    RSft */
/* Fn4  Alt  0    Supr Ctrl Spc  Spc  Meta Left Down Up   Rght */

[2] = { /* Numpad */
{KC_TRNS, KC_1,    KC_2,    KC_3,    S(KC_8),   KC_SLSH, S(KC_5),   S(KC_QUOT), S(KC_9),    S(KC_0),    KC_INS,     KC_DEL},
{FUNC(6), KC_4,    KC_5,    KC_6,    S(KC_EQL), KC_MINS, S(KC_6),   KC_QUOT,    S(KC_LBRC), S(KC_RBRC), KC_QUOT,    KC_TRNS},
{KC_TRNS, KC_7,    KC_8,    KC_9,    KC_EQL,    KC_DOT,  S(KC_GRV), KC_GRV,     KC_LBRC,    KC_RBRC,    S(KC_QUOT), KC_TRNS},
{FUNC(4), KC_LALT, KC_0, KC_LGUI, KC_LCTL,   FUNC(5), FUNC(5),   FUNC(1),    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT}
},

/* Tab  PgUp NONE Up   NONE Home NONE NONE NONE Up   NONE Del  */
/* Esc  PgDn Left Down Rght End  NONE NONE Left Down Rght Entr */
/* LSft NONE NONE NONE NONE NONE NONE NONE NONE NONE NONE RSft */
/* Fn4  Alt  Hypr Supr Ctrl Spc  Spc  Meta Left Down Up   Rght */

[3] = { /* Navigation */
{KC_TRNS, KC_NO,   KC_UP,   KC_NO,   KC_BSPC, KC_NO,   KC_HOME, KC_NO,   KC_UP,   KC_NO,   KC_PGUP, KC_TRNS},
{FUNC(6), KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,  KC_NO,   KC_END,  KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_TRNS},
{KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS},
{FUNC(4), KC_LALT, KC_TRNS, KC_LGUI, KC_LCTL, KC_SPC,  KC_SPC,  FUNC(1), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}
},

/* Caps F1   F2   F3   F4   NONE NONE PRT  SCR  PAU  CAI  CAD  */
/* Tab  F5   F6   F7   F8   NONE NONE NONE VOL- VOL+ MUTE Entr */
/* LSft F9   F10  F11  F12  NONE NONE NONE PREV NEXT PLAY RSft */
/* Fn4  Alt  Hypr Supr Ctrl Spc  Spc  Meta Left Down Up   Rght */

[4] = { /* Function Keys */
{KC_CAPS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,   KC_NO, KC_PSCR, KC_SLCK, KC_PAUS, LCTL(LALT(KC_INS)), LCTL(LALT(KC_DEL))},
{FUNC(6), KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,   KC_NO, KC_NO,   KC_VOLD, KC_VOLU, KC_MUTE,            KC_TRNS},
{KC_TRNS, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,   KC_NO, KC_NO,   KC_MPRV, KC_MNXT, KC_MPLY,            KC_TRNS},
{FUNC(4), KC_LALT, KC_TRNS, KC_LGUI, KC_LCTL, KC_SPC, KC_SPC, FUNC(1), KC_LEFT, KC_DOWN, KC_UP,              KC_RGHT}
}
};


const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(1),       // Symbols
    [2] = ACTION_LAYER_MOMENTARY(2),       // Numpad
    [3] = ACTION_LAYER_MOMENTARY(3),       // Navigation
    [4] = ACTION_LAYER_MOMENTARY(4),       // Function Keys
    [5] = ACTION_LAYER_TAP_KEY(2, KC_SPC), // Number
    [6] = ACTION_LAYER_TAP_KEY(3, KC_TAB)  // Navigation
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


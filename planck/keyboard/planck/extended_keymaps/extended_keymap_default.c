#include "extended_keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Tab  Q    W    E    R    T    Y    U    I    O    P    Back */
/* Esc  A    S    D    F    G    H    J    K    L    /    Entr */
/* LSft Z    X    C    V    B    N    M    ,    .    Up   RSft */
/* Fn4  Alt  Supr Ctrl Fn3  Spc  Spc  Fn1  Fn2  Left Down Rght */

[0] = { /* Qwerty */
{KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
{KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,   KC_J,    KC_K,    KC_L,    KC_SLSH, KC_ENT},
{KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_RSFT},
{FUNC(4), KC_LALT, KC_LGUI, KC_LCTL, FUNC(3), KC_SPC, KC_SPC, FUNC(1), FUNC(2), KC_LEFT, KC_DOWN, KC_RGHT}
},

/* Tab  !    @    #    *    /    :    "    (    )    ?    Del  */
/* Esc  $    %    ^    +    -    ;    '    {    }    NONE Entr */
/* LSft &    |    \    =    .    ~    `    [    ]    Up   RSft */
/* Fn4  Alt  Supr Ctrl _    Spc  Spc  Fn1  Fn2  Left Down Rght */

[1] = { /* Symbols */
{KC_TRNS, S(KC_1), S(KC_2),    S(KC_3), S(KC_8),    KC_SLSH, S(KC_SCLN),   S(KC_QUOT), S(KC_9),    S(KC_0),    S(KC_SLSH),  KC_DEL},
{KC_TRNS, S(KC_4), S(KC_5),    S(KC_6), S(KC_EQL),  KC_MINS, KC_SCLN,      KC_QUOT,    S(KC_LBRC), S(KC_RBRC), KC_NO,       KC_TRNS},
{KC_TRNS, S(KC_7), S(KC_BSLS), KC_BSLS, KC_EQL,     KC_DOT,  S(KC_GRV),    KC_GRV,     KC_LBRC,    KC_RBRC,    KC_TRNS,     KC_TRNS},
{FUNC(4), KC_TRNS, KC_TRNS,    KC_TRNS, S(KC_MINS), KC_TRNS, KC_TRNS,      FUNC(1),    FUNC(2),    KC_TRNS,    KC_TRNS,     KC_TRNS}
},


/* Tab  1    2    3    *    /    :    "    (    )    ?    Del  */
/* Esc  4    5    6    +    -    ;    '    {    }    NONE Entr */
/* LSft 7    8    9    =    .    ~    `    [    ]    Up   RSft */
/* Fn4  Alt  Supr Ctrl 0    Spc  Spc  Fn1  Fn2  Left Down Rght */

[2] = { /* Numpad */
{KC_TRNS, KC_1,    KC_2,    KC_3,    S(KC_8),   KC_SLSH, S(KC_SCLN), S(KC_QUOT), S(KC_9),    S(KC_0),    S(KC_SLSH), KC_DEL},
{KC_TRNS, KC_4,    KC_5,    KC_6,    S(KC_EQL), KC_MINS, KC_SCLN,    KC_QUOT,    S(KC_LBRC), S(KC_RBRC), KC_NO,      KC_TRNS},
{KC_TRNS, KC_7,    KC_8,    KC_9,    KC_EQL,    KC_DOT,  S(KC_GRV),  KC_GRV,     KC_LBRC,    KC_RBRC,    KC_TRNS,    KC_TRNS},
{FUNC(4), KC_TRNS, KC_TRNS, KC_TRNS, KC_0,      KC_TRNS, KC_TRNS,    FUNC(1),    FUNC(2),    KC_TRNS,    KC_TRNS,    KC_TRNS}
},

/* Tab  NONE Up   NONE Back Home PgUp NONE Up   NONE CAI  CAD  */
/* Esc  Left Down Rght Del  End  PgDn Left Down Rght NONE Entr */
/* LSft NONE NONE NONE NONE NONE NONE NONE NONE NONE Up   RSft */
/* Fn4  Alt  Supr Ctrl Fn3  Spc  Spc  Fn1  Fn2  Left Down Rght */

[3] = { /* Navigation */
{KC_TRNS, KC_NO,   KC_UP,   KC_NO,   KC_BSPC, KC_HOME, KC_PGUP, KC_NO,   KC_UP,   KC_NO,   LCTL(LALT(KC_INS)), LCTL(LALT(KC_DEL))},
{KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,  KC_END,  KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,              KC_TRNS},
{KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,            KC_TRNS},
{FUNC(4), KC_TRNS, KC_TRNS, KC_TRNS, FUNC(3), KC_TRNS, KC_TRNS, FUNC(1), FUNC(2), KC_TRNS, KC_TRNS,            KC_TRNS}
},

/* Caps F1   F2   F3   F4   NONE NONE PRT  SCR  PAU  CAI  CAD  */
/* Esc  F5   F6   F7   F8   NONE NONE NONE VOL- VOL+ MUTE Entr */
/* LSft F9   F10  F11  F12  NONE NONE NONE PREV NEXT PLAY RSft */
/* Fn4  Alt  App  Supr Ctrl Spc  Spc  Fn1  Fn2  Fn3  Left Rght */

[4] = { /* Function Keys */
{KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,   KC_NO,   KC_PSCR, KC_SLCK, KC_PAUS, KC_INS,  S(KC_INS)},
{KC_CAPS, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,   KC_NO,   KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,   KC_TRNS},
{KC_TRNS, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,   KC_NO,   KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS},
{FUNC(4), KC_TRNS, KC_TRNS, KC_TRNS, FUNC(3), KC_TRNS, KC_TRNS, FUNC(1), FUNC(2), KC_TRNS, KC_TRNS, KC_TRNS}
}
};


const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(1),  // Symbols
    [2] = ACTION_LAYER_MOMENTARY(2),  // Numpad
    [3] = ACTION_LAYER_MOMENTARY(3),  // Navigation
    [4] = ACTION_LAYER_MOMENTARY(4)   // Function Keys
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


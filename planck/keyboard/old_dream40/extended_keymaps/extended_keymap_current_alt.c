#include "extended_keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*  Esc Q W E R T Y U I O P Back */
/*  Tab A S D F G H J K L ; Ent  */
/* LSft Z X C V B N M , . / RSft */
/* Meta Alt Cmd Ctrl Fn2 Spc Spc Fn1 Left Down Up Right */

[0] = { /* Qwerty */
  {KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC},
  {KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT},
  {KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT},
  {S(LCTL(KC_LALT)), KC_LALT, KC_LGUI, KC_LCTL, FUNC(1), KC_SPC, KC_SPC, FUNC(2), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT}
                                                // Space is repeated to accommadate for both spacebar wiring positions
},

/*  Esc Home Up End PgUp { } _ Up Trans " Del */
/*  Tab Left Down Right PgDn ( ) Left Down Right ' Ent */
/* LSft | \ ~ ` [ ] Prnt Slck Paus Ins  RSft */
/* Meta Alt Cmd Ctrl Fn2 Spc Spc Fn1 Left Vol- Vol+ Mute */

[1] = { /* RAISE */
  {KC_TRNS, KC_HOME, KC_UP, KC_END, KC_PGUP, S(KC_LBRC), S(KC_RBRC), S(KC_MINS), KC_UP, KC_TRNS, S(KC_QUOT), KC_DEL},
  {KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, S(KC_9), S(KC_0), KC_LEFT, KC_DOWN, KC_RGHT, KC_QUOT, KC_TRNS},
  {KC_TRNS, S(KC_BSLS), KC_BSLS, S(KC_GRV), KC_GRV, KC_LBRC, KC_RBRC, KC_PSCR, KC_SLCK, KC_PAUS, KC_INS, KC_TRNS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, FUNC(1), KC_TRNS, KC_TRNS, FUNC(2), KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE}
},

/*  Esc 1 2 3 * / % F1  F2  F3  F4 Del */
/* Caps 4 5 6 + - ^ F5  F6  F7  F8 Ent */
/* LSft 7 8 9 0 = . F9 F10 F11 F12 RSft */
/* Meta Alt Cmd Ctrl Fn2 Spc Spc Fn1 Left Prev Next Play */

[2] = { /* LOWER */
  {KC_TRNS, KC_1, KC_2, KC_3, S(KC_8), KC_SLSH, S(KC_5),   KC_F1, KC_F2, KC_F3, KC_F4, KC_DEL},
  {KC_CAPS, KC_4, KC_5, KC_6, S(KC_EQL), KC_MINS, S(KC_6), KC_F5, KC_F6, KC_F7, KC_F8, KC_TRNS},
  {KC_TRNS, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_DOT, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, FUNC(1), KC_TRNS, KC_TRNS, FUNC(2), KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE}
},
};


const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(1),  // to RAISE
    [2] = ACTION_LAYER_MOMENTARY(2),  // to LOWER
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

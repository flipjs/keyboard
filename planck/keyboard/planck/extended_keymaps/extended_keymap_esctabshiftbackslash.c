#include "extended_keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Esc Q W E R T Y U I O P Backspace */
/* Tab A S D F G H J K L ; Enter */
/* LShift Z X C V B N M , . / RShift */
/* \ LAlt LGui LCtrl Fn2 Space Space Fn1 Left Down Up Right */
[0] = { /* Qwerty */
  {KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC},
  {KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT},
  {KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT},
  {KC_BSLS, KC_LALT, KC_LGUI, KC_LCTL, FUNC(2), KC_SPC, KC_SPC, FUNC(1), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT}
                                                // Space is repeated to accommadate for both spacebar wiring positions
},
/* Esc ! @ # ` { } F1 F2 F3 F4 Delete */
/* Tab $ % ^ ~ ( ) F5 F6 F7 F8 Enter */
/* LShift & _ " ' [ ] F9 F10 F11 F12 RShift */
/* £ LAlt LGui LCtrl Fn2 Space Space Fn1 Print Scroll Pause Insert */
[1] = { /* RAISE */
  {KC_TRNS, S(KC_1), S(KC_2), S(KC_3), KC_GRV, S(KC_LBRC), S(KC_RBRC), KC_F1, KC_F2, KC_F3, KC_F4, KC_DEL},
  {KC_TRNS, S(KC_4), S(KC_5), S(KC_6), S(KC_GRV), S(KC_9), S(KC_0), KC_F5, KC_F6, KC_F7, KC_F8, KC_TRNS},
  {KC_TRNS, S(KC_7), S(KC_MINS), S(KC_QUOT), KC_QUOT, KC_LBRC, KC_RBRC, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS},
  {LALT(KC_3), KC_TRNS, KC_TRNS, KC_TRNS, FUNC(2), KC_TRNS, KC_TRNS, FUNC(1), KC_PSCR, KC_SLCK, KC_PAUS, KC_INS}
},
/* Esc PgUp Home Up End Vol+ Prev 1 2 3 asterisk Delete */
/* Caps PgDn Left Down Right Vol- Next 4 5 6 - Enter */
/* LShift Undo Cut Copy Paste Mute Play 7 8 9 + RShift */
/* € LAlt LGui LCtrl Fn2 Space Space Fn1 0 . / = */
[2] = { /* LOWER */
  {KC_TRNS, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_VOLU, KC_MPRV, KC_1, KC_2, KC_3, S(KC_8), KC_DEL},
  {KC_CAPS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_VOLD, KC_MNXT, KC_4, KC_5, KC_6, KC_MINS, KC_TRNS},
  {KC_TRNS, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), KC_MUTE, KC_MPLY, KC_7, KC_8, KC_9, S(KC_EQL), KC_TRNS},
  {LALT(S(KC_2)), KC_TRNS, KC_TRNS, KC_TRNS, FUNC(2), KC_TRNS, KC_TRNS, FUNC(1), KC_0, KC_DOT, KC_SLSH, KC_EQL}
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

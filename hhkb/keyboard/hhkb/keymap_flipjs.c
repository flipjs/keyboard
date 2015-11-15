/*
 * SpaceFN
 * http://geekhack.org/index.php?topic=51069.0
 */
#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Fn3|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  `|BSp|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |        Space          |FN1  |Fn2|
     *       `-------------------------------------------'
     */
    KEYMAP(FN3, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           FN9, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN0,             \
                LALT,LGUI,          SPC,                 FN1, FN2),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,   \
           CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS, BSPC,      \
           TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,            \
                TRNS,TRNS,          SPC,                TRNS,TRNS),

    /* Layer 2: Flipjs Function Layer
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps | No| Up| No|BS |Hom|Pup|Prt|Scr|Pau| Up|Vo-|Vo+|Backs|
     * |-----------------------------------------------------------|
     * |Contro|Lft|Dwn|Rgt|Del|End|Pdn|  ~|Ins|Lft|Dwn|Rgt|Mute    |
     * |-----------------------------------------------------------|
     * |Shift   |cad|cai|cae|  V|  B|  N|Mut|Prv|Nxt|Ply|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |        Space          |Fn1  |Fn2|
     *       `-------------------------------------------'
     */
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,   \
           TRNS,NO,UP,NO,BSPC,HOME,PGUP,PSCR,SLCK, PAUS, UP,VOLD,VOLU,TRNS,        \
           TRNS,LEFT,DOWN,RGHT,DEL,END,PGDN,FN4,INS,LEFT,DOWN,RGHT,MUTE,            \
           TRNS,FN5,FN6,FN7,FN8,TRNS, TRNS,MUTE, MPRV, MNXT,MPLY,TRNS,TRNS,              \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 3: Mouse mode (IJKL)
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Mouse|   |   |   |   |   |MwL|MwD|McU|MwU|MwR|   |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|   |   |   |   |   |Mb2|McL|McD|McR|   |   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |Mb5|Mb4|Mb3|   |   |   |Shift |   |
     * `-----------------------------------------------------------'
     *      |    |     |          Mb1          |     |   |
     *      `--------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
    KEYMAP(ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           TRNS, NO,  NO,  NO,  NO,  NO,  WH_L,WH_D,MS_U,WH_U,WH_R,NO ,   NO,BSPC, \
           LCTL,  NO,  NO,  NO,  NO,NO,BTN2,  MS_L,MS_D,MS_R,NO , NO,  ENT, \
           LSFT,NO,  NO,  NO,  NO,  BTN5,BTN4,BTN3,NO ,   NO,NO,  RSFT,TRNS, \
                LALT,LGUI,          BTN1,               TRNS,TRNS),

};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_MOMENTARY(2),
    [2] = ACTION_MODS(MOD_LCTL|MOD_LSFT|MOD_LALT),            // Ctrl+Shift+Alt
    [3] = ACTION_MODS_TAP_KEY(MOD_LCTL|MOD_LALT, KC_ESC),     // Hold=Ctrl+Alt, Tap=Esc
    [4] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),                  // tilde
    [5] = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_DEL),         // Ctrl+Alt+Del
    [6] = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_INS),         // Ctrl+Alt+Ins
    [7] = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_ESC),         // Ctrl+Alt+Esc
    [8] = ACTION_MODS_KEY(MOD_LSFT, KC_INS),                  // Shift+Insert
    [9] = ACTION_LAYER_TAP_KEY(3, KC_TAB),                    // Mouse layer
};

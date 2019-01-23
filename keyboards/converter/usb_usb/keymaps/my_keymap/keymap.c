#include QMK_KEYBOARD_H

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}

/*
 * SpaceFN layout
 * http://geekhack.org/index.php?topic=51069.0
 */
const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
    /* 0: plain Qwerty
     *         ,---------------. ,---------------. ,---------------.
     *         |F13|F14|F15|F16| |F17|F18|F19|F20| |F21|F22|F23|F24|
     * ,---.   |---------------| |---------------| |---------------| ,-----------. ,---------------. ,-------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau| |VDn|VUp|Mut|Pwr| | Help  |
     * `---'   `---------------' `---------------' `---------------' `-----------' `---------------' `-------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------. ,-------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|JPY|Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -| |Stp|Agn|
     * |-----------------------------------------------------------| |-----------| |---------------| |-------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  | |Del|End|PgD| |  7|  8|  9|  +| |Mnu|Und|
     * |-----------------------------------------------------------| `-----------' |---------------| |-------|
     * |LCtrl |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  :|  #|Retn|               |  4|  5|  6|KP,| |Sel|Cpy|
     * |-----------------------------------------------------------|     ,---.     |---------------| |-------|
     * |Shft|  <|  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /| RO|Shift |     |Up |     |  1|  2|  3|KP=| |Exe|Pst|
     * |-----------------------------------------------------------| ,-----------. |---------------| |-------|
     * |Ctl|Gui|Alt|MHEN|HNJ| Space  |H/E|HENK|KANA|Alt|Gui|App|Ctl| |Lef|Dow|Rig| |  0    |  .|Ent| |Fnd|Cut|
     * `-----------------------------------------------------------' `-----------' `---------------' `-------'
     */
    [0] = LAYOUT_all(
                    KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24,
    KC_ESC,         KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,                      KC_PSCR,KC_SLCK,KC_PAUS,    KC_VOLD,KC_VOLU,KC_MUTE,KC_PWR,     KC_HELP,
    KC_ESC,         KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_JYEN,KC_BSPC,     KC_INS, KC_HOME,KC_PGUP,    KC_NLCK,KC_PSLS,KC_PAST,KC_PMNS,    KC_STOP,KC_AGIN,
    KC_TAB,         KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,        KC_BSLS,     KC_DEL, KC_END, KC_PGDN,    KC_P7,  KC_P8,  KC_P9,  KC_PPLS,    KC_MENU,KC_UNDO,
    KC_LCTL,        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,        KC_NUHS,KC_ENT,                                  KC_P4,  KC_P5,  KC_P6,  KC_PCMM,    KC_SLCT,KC_COPY,
    KC_LSFT,KC_NUBS,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,                KC_RO,  KC_RSFT,              KC_UP,             KC_P1,  KC_P2,  KC_P3,  KC_PEQL,    KC_EXEC,KC_PSTE,
    KC_LCTL,KC_LGUI,KC_LALT,KC_MHEN,KC_HANJ,        MO(1),          KC_HAEN,KC_HENK,KC_KANA,        KC_RALT,KC_RGUI,KC_APP, KC_RCTL,     KC_LEFT,KC_DOWN,KC_RGHT,    KC_P0,          KC_PDOT,KC_PENT,    KC_FIND,KC_CUT
    ),

    /* 1: SpaceFN
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
     * |-----------------------------------------------------------|
     * |Caps |   |   |Esc|   |   |   |Hom|Up |End|Psc|Slk|Pau|Ins  |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |PgU|Lef|Dow|Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |Spc|PgD|`  |~  |   |Men|          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    [1] = LAYOUT_all(
                    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
    ______,         ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,                      ______, ______, ______,     ______, ______, ______, ______,     ______,
    KC_GRV,         ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,      ______, ______, ______,     ______, ______, ______, ______,     ______, ______,
    ______,         ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,         ______,      ______, ______, ______,     ______, ______, ______, ______,     ______, ______,
    ______,         ______, ______, ______, ______, ______, KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT,______, ______,         ______, ______,                                  ______, ______, ______, ______,     ______, ______,
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,                 ______, ______,              ______,             ______, ______, ______, ______,     ______, ______,
    ______, ______, ______, ______, ______,         ______,         ______, ______, ______,         ______, ______, ______, ______,      ______, ______, ______,     ______,         ______, ______,     ______, ______
    ),
};

const uint16_t fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
    [1] = ACTION_MODS_KEY(MOD_LSFT|MOD_RSFT, KC_GRV),    // tilde
};

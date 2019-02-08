#include QMK_KEYBOARD_H

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
/* 
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | ESC    |   1  |   2  |   3  |   4  |   5  |  -   |           |  =   |   6  |   7  |   8  |   9  |   0  |  Bsp   |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |  L1  |           |  [   |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Caps   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------|  L2  |           |  ]   |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |  /   |  Up    |
 * `--------+------+------+---------------------------'           `---------------------------+------+------+--------'
 *   | Ctrl | Super|  Alt |                                                                   | Left |  Down| Right |
 *   `--------------------'                                                                   `--------------------'
 *                                        ,------|------.       ,---------------.
 *                                        |      | PgUp |       | Home |        |  
 *                                        | Space|------|       |------|  Enter | 
 *                                        |      | PgDn |       | End  |        | 
 *                                        `-------------'       `---------------'
 */
    [0] = LAYOUT_all(
	KC_ESC,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_MINS,       KC_EQL,  KC_6,   KC_7,   KC_8,   KC_9,   KC_0,    KC_BSPC,
	KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_PGUP,         KC_LBRC, KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,    KC_BSLS,
	KC_LCTL, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                           KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_QUOT, 
	KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_PGDN,         KC_RBRC, KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH, KC_RSHIFT,
	KC_LCTL, KC_LGUI,KC_LALT,                                                                        KC_LEFT,KC_DOWN, KC_RGHT,
                                             KC_SPC, KC_INS,       KC_HOME, LT(1,KC_ENT),
                                             KC_NO , KC_DEL,       KC_END, KC_NO
    ),
    [1] = LAYOUT_all(
    KC_GRV,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F11,    KC_F12,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_DEL, 
	KC_CAPS,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  KC_F9,  KC_F10,  KC_F11,  KC_F12,  _______, 
	_______,  KC_MPRV,  KC_MPLY,  KC_MNXT,  _______,  _______,                      _______, KC_F5,  KC_F6,  KC_F7,  KC_F8,  _______, 
	_______,  KC_MUTE,  KC_VOLD,  KC_VOLU,   _______,  _______,  _______,    TG(2),  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_UP, _______, 
	_______,  _______,  _______,                                                                            KC_LEFT,  KC_DOWN,  KC_RGHT,
                                                 _______,  _______,    _______,  _______,  
                                                 _______,  _______,    _______,  _______
    ),
    [2] = LAYOUT_all(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  KC_CALC,  KC_NLCK,  KC_PSLS,  KC_PAST,  KC_PMNS, 
	_______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  KC_P7,  KC_P8,  KC_P9,  KC_PPLS, 
	_______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,  KC_P4,  KC_P5,  KC_P6,  KC_PEQL, 
	_______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  KC_P1,  KC_P2,  KC_P3,  KC_PENT, 
	_______,  _______,  _______,                                                                            KC_P0,  KC_PDOT,  KC_PENT,
                                                 _______,  _______,    _______,  _______,  
                                                 _______,  _______,    _______,  _______
    ),
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}

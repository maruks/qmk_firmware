// Default layout for Zeal65
#include QMK_KEYBOARD_H

enum custom_keycodes {
  EMAIL = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case EMAIL:
      if (record->event.pressed) {
        SEND_STRING("maris.orbidans@gmail.com");
      }
  }
  return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

#define _______ KC_TRNS
#define ___x___ KC_NO

// Default layer
[0] = LAYOUT_65_all (
		     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRAVE, KC_PGUP ,
 KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC, KC_DEL  ,
 KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           KC_PGDN  ,
 KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   MO(1)   ,
 KC_LALT, KC_LGUI,                                              KC_SPC,                    KC_RGUI, KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT ),

// Fn1 Layer
[1] = LAYOUT_65_all(
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, KC_HOME,
  _______, _______, KC_UP,   EMAIL  , _______, _______, _______, _______, _______, _______, _______, KC_SLCK, KC_PAUS, _______, KC_INS,
  KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_END,
  _______,          _______, _______, _______, _______, _______, _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, _______,
  _______, _______,                                              _______,                   _______, MO(2)  , KC_HOME, _______, KC_END ),

// Fn2 Layer
[2] = LAYOUT_65_all(
 KC_PWR , ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, KC_EJCT,
 ___x___, ___x___, ___x___, ___x___, RESET  , ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,
 ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,          ___x___,
 ___x___,          ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,
 TO(3)  , ___x___,                                              TO(0)  ,                   ___x___, _______, ___x___, ___x___, ___x___ ),

// Fn3 Layer (zeal60 Configuration)
[3] = LAYOUT_65_all(
 ___x___, EF_DEC ,  EF_INC, H1_DEC,  H1_INC,  H2_DEC,  H2_INC,   BR_DEC, BR_INC,  ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,
 ___x___, ES_DEC ,  ES_INC, S1_DEC,  S1_INC,  S2_DEC,  S2_INC,  ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,
 ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,          ___x___,
 ___x___,          ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___, ___x___,
 _______, TO(0)  ,                                              TO(0) ,                    ___x___, _______, ___x___, ___x___, ___x___ ),

};

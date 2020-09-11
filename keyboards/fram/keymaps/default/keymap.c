#include "fram.h"
#include "action_layer.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* 0: qwerty */
	    KEYMAP(ESC, 1,   2,   3,   4,   5,        6,   7,   8,   9,   0,   MINS,  \
		   GRV, Q,   W,   F,   P,   G,        J,   L,   U,   Y,   SCLN,EQL, \
		   LT(1, KC_TAB),A,   R,   LALT_T(KC_S),   LCTL_T(KC_T),   D,   LSFT,H,   RCTL_T(KC_N),   RALT_T(KC_E),   I,   O,   LT(1, KC_QUOT), \
		   LSFT,Z,   X,   C,   V,   B,   LGUI,K,   M, COMM,  DOT, SLSH,RSFT,  \
		   FN0,DEL,F6,F7,F8, BSPC,ENT, SPC, LEFT,DOWN,UP,  RGHT,BSLS ),
/* 1: numbers */
	    KEYMAP(DEL, F1,  F2,  F3,  F4,  F5,       F6,  F7,  F8,  F9,  F10, F11,  \
                   TRNS,TRNS,TRNS,TRNS,TRNS,LPRN,     RPRN,TRNS,TRNS,TRNS,TRNS, F12, \
                   KC_TRNS,TRNS,TRNS,KC_TRNS,KC_TRNS,LBRC,BTN2,RBRC,KC_TRNS,KC_TRNS,TRNS,TRNS,KC_TRNS, \
                   TRNS,TRNS,TRNS,TRNS,TRNS,LCBR,TRNS,RCBR,TRNS,TRNS,TRNS,TRNS,TRNS, \
                   TRNS,TRNS,TRNS,TRNS,TRNS,BTN1,TRNS,TRNS,MS_L, MS_D, MS_U, MS_R, TRNS ),

	    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
                   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
                   KC_TRNS,TRNS,TRNS,KC_TRNS,KC_TRNS,TRNS,TRNS,TRNS,KC_TRNS,KC_TRNS,TRNS,TRNS,KC_TRNS, \
                   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  \
                   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS ),

	    
};


/* const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { */
/*     /\* 0: qwerty *\/ */
/*     KEYMAP( */
/* 	      KC_ESC,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,KC_GRV,\ */
/*         KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_LBRC,KC_RBRC,KC_BSPC,\ */
/*         KC_CAPS,KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCLN,KC_QUOT,KC_NO,KC_ENT,\ */
/*         KC_LSFT,F(1),KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,F(0),KC_RSFT,\ */
/*         KC_LCTL,KC_LGUI,KC_LALT,       KC_SPC,             KC_BSLS,KC_RALT,KC_RGUI,KC_APP,KC_RCTL), */
/*     /\* 1: fn *\/ */
/* 	KEYMAP( */
/*         KC_ESC,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_TRNS,\ */
/*         KC_TRNS,KC_TRNS,KC_UP,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\ */
/*         KC_TRNS,KC_LEFT,KC_DOWN,KC_RGHT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\ */
/*         KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\ */
/*         KC_TRNS,KC_TRNS,KC_TRNS,       KC_TRNS,            KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS), */
/*     /\* 2: arrows *\/ */
/* 	KEYMAP( */
/*         KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\ */
/*         KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\ */
/*         KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\ */
/*         KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_UP,\ */
/*         KC_TRNS,KC_TRNS,KC_TRNS,       KC_TRNS,            KC_TRNS,KC_TRNS,KC_LEFT,KC_DOWN,KC_RGHT), */
/* }; */

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
    [1] = ACTION_LAYER_TOGGLE(2),     // toggle arrow overlay
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};

void matrix_scan_user(void) {

};

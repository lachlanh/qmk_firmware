#include "dactyl-manuform.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _FN   1

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = KEYMAP_5x7(
  // left hand
   /* KC_ESC,    KC_1,    KC_2,    KC_3,   KC_4,   KC_5,  */
   /* MO(_FN),   KC_Q,    KC_W,    KC_F,   KC_P,   KC_G, */
   /* KC_TAB,    KC_A,    KC_R,    KC_S,   KC_T,   KC_D,    KC_LSHIFT, */
   /* KC_LSHIFT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,    KC_LCTRL, */
   /* KC_LCTRL,  KC_LALT, KC_F6,   KC_F7,  KC_F8,  KC_BSPC, KC_LALT,  */

              KC_5,    KC_4,    KC_3,    KC_2,   KC_1,   KC_ESC, 
              KC_G,    KC_P,    KC_F,    KC_W,   KC_Q,   KC_GRV,
   KC_LSHIFT, KC_D,    KC_T,    KC_S,    KC_R,   KC_A,   KC_TAB,
   KC_LGUI,   KC_B,    KC_V,    KC_C,    KC_X,   KC_Z,   KC_LSHIFT,
   MO(_FN),   KC_BSPC, KC_F8,   KC_F7,   KC_F6,  KC_LALT,KC_LCTRL, 

   
   /* KC_DOWN,   KC_UP, KC_BSPC, KC_LSFT,MO(_FN),    KC_LCTRL, */
   /*                                      KC_LGUI, KC_LALT, */
   
        // right hand
                        KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,
                        KC_J,    KC_L,   KC_U,    KC_Y,    KC_SCLN, KC_EQL,
              KC_ENTER, KC_H,    KC_N,   KC_E,    KC_I,    KC_O,    KC_QUOT, 
              KC_RGUI,  KC_K,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSHIFT,
              MO(_FN),  KC_SPC,  KC_LEFT,KC_DOWN,   KC_UP, KC_RIGHT,KC_BSLS),

                     /* KC_RCTRL,MO(_FN),KC_ENTER,KC_SPC,  KC_LEFT, KC_RIGHT, */
                     /* KC_RALT, KC_RGUI), */
[_FN] = KEYMAP_5x7(
  // left hand
   /* _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,  */
   /* _______,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   _______, */
   /* _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_LBRC, */
   /* RESET,    _______,  _______,  _______,  _______, _______,
   KC_DOWN,   KC_UP, KC_BSPC, KC_LSFT,MO(_FN),    KC_LCTRL, */
   /*                                      KC_LGUI, KC_LALT, */
              KC_F5,   KC_F4,   KC_F3,   KC_F2,  KC_F1,  _______, 
              _______, _______, _______, _______,_______,_______,
   _______,   KC_LBRC, _______, _______, _______,_______,_______,
   _______,   _______, _______, _______, _______,_______,_______,
   MO(_FN),   _______, _______, _______, _______,_______,_______, 


   // right hand
                     /* KC_F6,    KC_F7,    KC_F8,    KC_F9,     KC_F10,  KC_F11, */
                     /* _______,  KC_HOME,  KC_PGDN,  KC_PGUP,   KC_END,  KC_F12, */
                     /* KC_RBRC,  KC_LEFT,  KC_DOWN,  KC_UP,     KC_RIGHT, _______, */
                     /* _______,  _______,  _______,  _______,   _______,   RESET, */
                     /* KC_RCTRL,MO(_FN),KC_ENTER,KC_SPC,  KC_LEFT, KC_RIGHT, */
                     /* KC_RALT, KC_RGUI), */
                        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
                        _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_F12,
              _______,  KC_RBRC, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_______, 
              _______,  _______, _______, _______, _______, _______, _______,
              MO(_FN),  _______, _______, _______, _______, _______, RESET),

   };



void persistant_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

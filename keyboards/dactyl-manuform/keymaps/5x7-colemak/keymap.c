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
   MO(_FN),   KC_Q,    KC_W,    KC_F,   KC_P,   KC_G,
   KC_TAB,    KC_A,    KC_R,    KC_S,   KC_T,   KC_D,    KC_LSHIFT,
   KC_LSHIFT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,    KC_LCTRL,
   KC_LCTRL,  KC_LALT, KC_F6,   KC_F7,  KC_F8,  KC_BSPC, KC_LALT, 

   
   /* KC_DOWN,   KC_UP, KC_BSPC, KC_LSFT,MO(_FN),    KC_LCTRL, */
   /*                                      KC_LGUI, KC_LALT, */
   
        // right hand
                        KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,
                        KC_J,    KC_L,   KC_U,    KC_Y,    KC_SCLN, KC_EQL,
              KC_ENTER, KC_H,    KC_N,   KC_E,    KC_I,    KC_O,    KC_QUOT, 
              KC_RGUI,  KC_K,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSHIFT,
              MO(_FN),  KC_SPC,  KC_LEFT,KC_UP,   KC_DOWN, KC_RIGHT,RESET),

                     /* KC_RCTRL,MO(_FN),KC_ENTER,KC_SPC,  KC_LEFT, KC_RIGHT, */
                     /* KC_RALT, KC_RGUI), */

   };



void persistant_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

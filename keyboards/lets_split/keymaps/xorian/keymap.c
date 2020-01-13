// Author: Ken Schalk (aka xorian on reddit, freenode, github,
// geekhack, deskthority, and other places)

#include "lets_split.h"

// Layer enums (shared)
#include "xorian_layers.h"

// For readability
#define _______ KC_TRNS

// Tap dance function numbers
enum {
  // For switching the default (alpha) layer
  TD_L = 0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Default QWERTY layer
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  | Enter|  |Enter |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  | Tab  |  | Tab  |   H  |   J  |   K  |   L  |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * | [Num]|   Z  |   X  |   C  |   V  | LCtl |  |LShift|   B  |   N  |   M  |[Dflt]|[Num] |
 * |------+------+------+------+------+------|  |------+------+------+------+-------------|
 * | LGui |[Mous]| [Nav]| [Sym]| [Mir]| Space|  |BkSpc | [Mir]| [Sym]| [Nav]|[Mous]| RGui |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
[L_QW] = LAYOUT(
   // left hand                                                          // right hand
   KC_Q,            KC_W,        KC_E,        KC_R,     KC_T, KC_ENT,    KC_ENT,  KC_Y,           KC_U,        KC_I,        KC_O,    KC_P,
   KC_A,     ALT_T(KC_S), CTL_T(KC_D), SFT_T(KC_F),     KC_G, KC_TAB,    KC_TAB,  KC_H,    SFT_T(KC_J), CTL_T(KC_K), ALT_T(KC_L), _______,
   MO(L_NB),        KC_Z,        KC_X,        KC_C,     KC_V, KC_LCTL,   KC_LSFT, KC_B,           KC_N,        KC_M,    TD(TD_L), MO(L_NB),
   KC_LGUI,     MO(L_MS),     MO(L_NV),   MO(L_SB), MO(L_MQ), KC_SPC,    KC_BSPC, MO(L_MQ),   MO(L_SB),    MO(L_NV),    MO(L_MS),  KC_RGUI
),

/* Tarmak 1 layer
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * |   Q  |   W  |   J  |   R  |   T  | Enter|  |Enter |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  | Tab  |  | Tab  |   H  |   N  |   E  |   L  |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * | [Num]|   Z  |   X  |   C  |   V  | LCtl |  |LShift|   B  |   K  |   M  |[Dflt]|[Num] |
 * |------+------+------+------+------+------|  |------+------+------+------+-------------|
 * | LGui |[Mous]| [Nav]| [Sym]| [Mir]| Space|  |BkSpc | [Mir]| [Sym]| [Nav]|[Mous]| RGui |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
[L_T1] = LAYOUT(
   // left hand                                                          // right hand
   KC_Q,            KC_W,        KC_J,        KC_R,     KC_T, KC_ENT,    KC_ENT,  KC_Y,           KC_U,        KC_I,        KC_O,    KC_P,
   KC_A,     ALT_T(KC_S), CTL_T(KC_D), SFT_T(KC_F),     KC_G, KC_TAB,    KC_TAB,  KC_H,    SFT_T(KC_N), CTL_T(KC_E), ALT_T(KC_L), _______,
   MO(L_NB),        KC_Z,        KC_X,        KC_C,     KC_V, KC_LCTL,   KC_LSFT, KC_B,           KC_K,        KC_M,    TD(TD_L), MO(L_NB),
   KC_LGUI,     MO(L_MS),     MO(L_NV),   MO(L_SB), MO(L_M1), KC_SPC,    KC_BSPC, MO(L_M1),   MO(L_SB),    MO(L_NV),    MO(L_MS),  KC_RGUI
),

/* Tarmak 2 layer
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * |   Q  |   W  |   F  |   R  |   G  | Enter|  |Enter |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |   A  |   S  |   D  |   T  |   J  | Tab  |  | Tab  |   H  |   N  |   E  |   L  |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * | [Num]|   Z  |   X  |   C  |   V  | LCtl |  |LShift|   B  |   K  |   M  |[Dflt]|[Num] |
 * |------+------+------+------+------+------|  |------+------+------+------+-------------|
 * | LGui |[Mous]| [Nav]| [Sym]| [Mir]| Space|  |BkSpc | [Mir]| [Sym]| [Nav]|[Mous]| RGui |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
[L_T2] = LAYOUT(
   // left hand                                                          // right hand
   KC_Q,            KC_W,        KC_F,        KC_R,     KC_G, KC_ENT,    KC_ENT,  KC_Y,           KC_U,        KC_I,        KC_O,    KC_P,
   KC_A,     ALT_T(KC_S), CTL_T(KC_D), SFT_T(KC_T),     KC_J, KC_TAB,    KC_TAB,  KC_H,    SFT_T(KC_N), CTL_T(KC_E), ALT_T(KC_L), _______,
   MO(L_NB),        KC_Z,        KC_X,        KC_C,     KC_V, KC_LCTL,   KC_LSFT, KC_B,           KC_K,        KC_M,    TD(TD_L), MO(L_NB),
   KC_LGUI,     MO(L_MS),     MO(L_NV),   MO(L_SB), MO(L_M2), KC_SPC,    KC_BSPC, MO(L_M2),   MO(L_SB),    MO(L_NV),    MO(L_MS),  KC_RGUI
),

/* Tarmak 3 layer
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * |   Q  |   W  |   F  |   J  |   G  | Enter|  |Enter |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |   A  |   R  |   S  |   T  |   D  | Tab  |  | Tab  |   H  |   N  |   E  |   L  |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * | [Num]|   Z  |   X  |   C  |   V  | LCtl |  |LShift|   B  |   K  |   M  |[Dflt]|[Num] |
 * |------+------+------+------+------+------|  |------+------+------+------+-------------|
 * | LGui |[Mous]| [Nav]| [Sym]| [Mir]| Space|  |BkSpc | [Mir]| [Sym]| [Nav]|[Mous]| RGui |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
[L_T3] = LAYOUT(
   // left hand                                                          // right hand
   KC_Q,            KC_W,        KC_F,        KC_J,     KC_G, KC_ENT,    KC_ENT,  KC_Y,           KC_U,        KC_I,        KC_O,    KC_P,
   KC_A,     ALT_T(KC_R), CTL_T(KC_S), SFT_T(KC_T),     KC_D, KC_TAB,    KC_TAB,  KC_H,    SFT_T(KC_N), CTL_T(KC_E), ALT_T(KC_L), _______,
   MO(L_NB),        KC_Z,        KC_X,        KC_C,     KC_V, KC_LCTL,   KC_LSFT, KC_B,           KC_K,        KC_M,    TD(TD_L), MO(L_NB),
   KC_LGUI,     MO(L_MS),     MO(L_NV),   MO(L_SB), MO(L_M3), KC_SPC,    KC_BSPC, MO(L_M3),   MO(L_SB),    MO(L_NV),    MO(L_MS),  KC_RGUI
),

/* Tarmak 4 layer
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * |   Q  |   W  |   F  |   P  |   G  | Enter|  |Enter |   J  |   U  |   I  |   Y  |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |   A  |   R  |   S  |   T  |   D  | Tab  |  | Tab  |   H  |   N  |   E  |   L  |   O  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * | [Num]|   Z  |   X  |   C  |   V  | LCtl |  |LShift|   B  |   K  |   M  |[Dflt]|[Num] |
 * |------+------+------+------+------+------|  |------+------+------+------+-------------|
 * | LGui |[Mous]| [Nav]| [Sym]| [Mir]| Space|  |BkSpc | [Mir]| [Sym]| [Nav]|[Mous]| RGui |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
[L_T4] = LAYOUT(
   // left hand                                                          // right hand
   KC_Q,            KC_W,        KC_F,        KC_P,     KC_G, KC_ENT,    KC_ENT,  KC_J,           KC_U,        KC_I,        KC_Y, _______,
   KC_A,     ALT_T(KC_R), CTL_T(KC_S), SFT_T(KC_T),     KC_D, KC_TAB,    KC_TAB,  KC_H,    SFT_T(KC_N), CTL_T(KC_E), ALT_T(KC_L),    KC_O,
   MO(L_NB),        KC_Z,        KC_X,        KC_C,     KC_V, KC_LCTL,   KC_LSFT, KC_B,           KC_K,        KC_M,    TD(TD_L), MO(L_NB),
   KC_LGUI,     MO(L_MS),     MO(L_NV),   MO(L_SB), MO(L_M4), KC_SPC,    KC_BSPC, MO(L_M4),   MO(L_SB),    MO(L_NV),    MO(L_MS),  KC_RGUI
),

/* Colemak layer
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * |   Q  |   W  |   F  |   P  |   G  | Enter|  |Enter |   J  |   L  |   U  |   Y  |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |   A  |   R  |   S  |   T  |   D  | Tab  |  | Tab  |   H  |   N  |   E  |   I  |   O  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * | [Num]|   Z  |   X  |   C  |   V  | LCtl |  |LShift|   B  |   K  |   M  |[Dflt]|[Num] |
 * |------+------+------+------+------+------|  |------+------+------+------+-------------|
 * | LGui |[Mous]| [Nav]| [Sym]| [Mir]| Space|  |BkSpc | [Mir]| [Sym]| [Nav]|[Mous]| RGui |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
[L_CM] = LAYOUT(
   // left hand                                                          // right hand
   KC_Q,            KC_W,        KC_F,        KC_P,     KC_G, KC_ENT,    KC_ENT,  KC_J,           KC_L,        KC_U,        KC_Y, _______,
   KC_A,     ALT_T(KC_R), CTL_T(KC_S), SFT_T(KC_T),     KC_D, KC_TAB,    KC_TAB,  KC_H,    SFT_T(KC_N), CTL_T(KC_E), ALT_T(KC_I),    KC_O,
   MO(L_NB),        KC_Z,        KC_X,        KC_C,     KC_V, KC_LCTL,   KC_LSFT, KC_B,           KC_K,        KC_M,    TD(TD_L), MO(L_NB),
   KC_LGUI,     MO(L_MS),     MO(L_NV),   MO(L_SB), MO(L_MC), KC_SPC,    KC_BSPC, MO(L_MC),   MO(L_SB),    MO(L_NV),    MO(L_MS),  KC_RGUI
),

/* Mirror QWERTY
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * |   P  |   O  |   I  |   U  |   Y  |      |  |      |   T  |   R  |   E  |   W  |   Q  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |   L  |   K  |   J  |   H  |      |  |      |   G  |   F  |   D  |   S  |   A  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |   M  |   N  |   B  |LShift|  | LCtl |   V  |   C  |   X  |   Z  |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |      |      |      | BkSpc|  |Space |      |      |      |      |      |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
[L_MQ] = LAYOUT(
   // left hand                                            // right hand
   KC_P,    KC_O,    KC_I,    KC_U,    KC_Y,    _______,   _______, KC_T,    KC_R,    KC_E,    KC_W,    KC_Q,   
   _______, KC_L,    KC_K,    KC_J,    KC_H,    _______,   _______, KC_G,    KC_F,    KC_D,    KC_S,    KC_A,   
   _______, _______, KC_M,    KC_N,    KC_B,    KC_LSFT,   KC_LCTL, KC_V,    KC_C,    KC_X,    KC_Z,    _______,
   _______, _______, _______, _______, _______, KC_BSPC,    KC_SPC, _______, _______, _______, _______, _______
),

/* Mirror Tarmak 1
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * |   P  |   O  |   I  |   U  |   Y  |      |  |      |   T  |   R  |   J  |   W  |   Q  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |   L  |   E  |   N  |   H  |      |  |      |   G  |   F  |   D  |   S  |   A  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |   M  |   K  |   B  |LShift|  | LCtl |   V  |   C  |   X  |   Z  |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |      |      |      | BkSpc|  |Space |      |      |      |      |      |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
[L_M1] = LAYOUT(
   // left hand                                            // right hand
   KC_P,    KC_O,    KC_I,    KC_U,    KC_Y,    _______,   _______, KC_T,    KC_R,    KC_J,    KC_W,    KC_Q,   
   _______, KC_L,    KC_E,    KC_N,    KC_H,    _______,   _______, KC_G,    KC_F,    KC_D,    KC_S,    KC_A,   
   _______, _______, KC_M,    KC_K,    KC_B,    KC_LSFT,   KC_LCTL, KC_V,    KC_C,    KC_X,    KC_Z,    _______,
   _______, _______, _______, _______, _______, KC_BSPC,    KC_SPC, _______, _______, _______, _______, _______
),

/* Mirror Tarmak 2
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * |   P  |   O  |   I  |   U  |   Y  |      |  |      |   G  |   R  |   F  |   W  |   Q  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |   L  |   E  |   N  |   H  |      |  |      |   J  |   T  |   D  |   S  |   A  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |   M  |   K  |   B  |LShift|  | LCtl |   V  |   C  |   X  |   Z  |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |      |      |      | BkSpc|  |Space |      |      |      |      |      |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
[L_M2] = LAYOUT(
   // left hand                                            // right hand
   KC_P,    KC_O,    KC_I,    KC_U,    KC_Y,    _______,   _______, KC_G,    KC_R,    KC_F,    KC_W,    KC_Q,   
   _______, KC_L,    KC_E,    KC_N,    KC_H,    _______,   _______, KC_J,    KC_T,    KC_D,    KC_S,    KC_A,   
   _______, _______, KC_M,    KC_K,    KC_B,    KC_LSFT,   KC_LCTL, KC_V,    KC_C,    KC_X,    KC_Z,    _______,
   _______, _______, _______, _______, _______, KC_BSPC,    KC_SPC, _______, _______, _______, _______, _______
),

/* Mirror Tarmak 3
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * |   P  |   O  |   I  |   U  |   Y  |      |  |      |   G  |   J  |   F  |   W  |   Q  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |   L  |   E  |   N  |   H  |      |  |      |   D  |   T  |   S  |   R  |   A  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |   M  |   K  |   B  |LShift|  | LCtl |   V  |   C  |   X  |   Z  |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |      |      |      | BkSpc|  |Space |      |      |      |      |      |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
[L_M3] = LAYOUT(
   // left hand                                            // right hand
   KC_P,    KC_O,    KC_I,    KC_U,    KC_Y,    _______,   _______, KC_G,    KC_J,    KC_F,    KC_W,    KC_Q,   
   _______, KC_L,    KC_E,    KC_N,    KC_H,    _______,   _______, KC_D,    KC_T,    KC_S,    KC_R,    KC_A,   
   _______, _______, KC_M,    KC_K,    KC_B,    KC_LSFT,   KC_LCTL, KC_V,    KC_C,    KC_X,    KC_Z,    _______,
   _______, _______, _______, _______, _______, KC_BSPC,    KC_SPC, _______, _______, _______, _______, _______
),

/* Mirror Tarmak 4
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * |      |   Y  |   I  |   U  |   J  |      |  |      |   G  |   P  |   F  |   W  |   Q  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |   O  |   L  |   E  |   N  |   H  |      |  |      |   D  |   T  |   S  |   R  |   A  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |   M  |   K  |   B  |LShift|  | LCtl |   V  |   C  |   X  |   Z  |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |      |      |      | BkSpc|  |Space |      |      |      |      |      |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
[L_M4] = LAYOUT(
   // left hand                                            // right hand
   _______, KC_Y,    KC_I,    KC_U,    KC_J,    _______,   _______, KC_G,    KC_P,    KC_F,    KC_W,    KC_Q,   
   KC_O,    KC_L,    KC_E,    KC_N,    KC_H,    _______,   _______, KC_D,    KC_T,    KC_S,    KC_R,    KC_A,   
   _______, _______, KC_M,    KC_K,    KC_B,    KC_LSFT,   KC_LCTL, KC_V,    KC_C,    KC_X,    KC_Z,    _______,
   _______, _______, _______, _______, _______, KC_BSPC,    KC_SPC, _______, _______, _______, _______, _______
),

/* Mirror Colemak
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * |      |   Y  |   U  |   L  |   J  |      |  |      |   G  |   P  |   F  |   W  |   Q  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |   O  |   I  |   E  |   N  |   H  |      |  |      |   D  |   T  |   S  |   R  |   A  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |   M  |   K  |   B  |LShift|  | LCtl |   V  |   C  |   X  |   Z  |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |      |      |      | BkSpc|  |Space |      |      |      |      |      |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
[L_MC] = LAYOUT(
   // left hand                                            // right hand
   _______, KC_Y,    KC_U,    KC_L,    KC_J,    _______,   _______, KC_G,    KC_P,    KC_F,    KC_W,    KC_Q,   
   KC_O,    KC_I,    KC_E,    KC_N,    KC_H,    _______,   _______, KC_D,    KC_T,    KC_S,    KC_R,    KC_A,   
   _______, _______, KC_M,    KC_K,    KC_B,    KC_LSFT,   KC_LCTL, KC_V,    KC_C,    KC_X,    KC_Z,    _______,
   _______, _______, _______, _______, _______, KC_BSPC,    KC_SPC, _______, _______, _______, _______, _______
),

/* Numbers: ambidextrous numbers
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * |      |  7   |  8   |  9   |  0   |      |  |      |  7   |  8   |  9   |  0   |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |  4   |  5   |  6   |      |      |  |      |  4   |  5   |  6   |      |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |  1   |  2   |  3   |      |      |  |      |  1   |  2   |  3   |      |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |  |      |      |      |      |      |      |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
[L_NB] = LAYOUT(
   // left hand                                                           // right hand
   _______,        KC_7,        KC_8,        KC_9,    KC_0,    _______,   _______,        KC_7,        KC_8,        KC_9,    KC_0,    _______,
   _______, ALT_T(KC_4), CTL_T(KC_5), SFT_T(KC_6),    _______, _______,   _______, SFT_T(KC_4), CTL_T(KC_5), ALT_T(KC_6),    _______, _______,
   _______,        KC_1,        KC_2,        KC_3,    _______, _______,   _______,        KC_1,        KC_2,        KC_3,    _______, _______,
   _______,     _______,     _______,     _______,    _______, _______,   _______,     _______,     _______,     _______,    _______, _______
),

/* Navigation: ambidextrous arrow and other navigation keys
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * | Home |  Up  |  End | PgUp |  Ins | Reset|  |Reset |  Ins | PgUp | Home |  Up  |  End |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * | Left | Down | Right| PgDn |  Del |      |  |      |  Del | PgDn | Left | Down | Right|
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |  |      |      |      |      |      |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |  |      |      |      |      |      |      |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
[L_NV] = LAYOUT(
   // left hand                                            // right hand
   KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_INS,  RESET,     RESET,   KC_INS,  KC_PGUP, KC_HOME, KC_UP,   KC_END, 
   KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_DEL,  _______,   _______, KC_DEL,  KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,
   _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______,
   _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______
),

/* Symbol Layer : All the symbol only keys, ambidextrous
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * | Esc  |      |   `  |   -  |   =  |      |  |      |   `  |   -  |   =  |      | Esc  |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |   [  |   ]  |   ;  |   '  |      |  |      |   [  |   ]  |   ;  |   '  |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |   ,  |   .  |   /  |   \  |      |  |      |   ,  |   .  |   /  |   \  |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |  |      |      |      |      |      |      |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
[L_SB] = LAYOUT(
   // left hand                                            // right hand
   KC_ESC,  _______, KC_GRV,  KC_MINS, KC_EQL,  _______,   _______, KC_GRV,  KC_MINS, KC_EQL,  _______, KC_ESC,
   _______, KC_LBRC, KC_RBRC, KC_SCLN, KC_QUOT, _______,   _______, KC_LBRC, KC_RBRC, KC_SCLN, KC_QUOT, _______,
   _______, KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS, _______,   _______, KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS, _______,
   _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______
),

/* Mouse layer: Most useful for a click without moving the mouse and
 * scrolling with the mouse wheel without touching the mouse.  Also,
 * who knew there was a horizontal scroll wheel?
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * |WhLeft| MsUp |WhRght| WhUp | LCLK |      |  |      | LCLK | WhUp |WhLeft| MsUp |WhRght|
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |MsLeft|MsDown|MsRght| WhDn | MClk |      |  |      | MClk | WhDn |MsLeft|MsDown|MsRght|
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |      |      | RClk |      |  |      | RClk |      |      |      |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |  |      |      |      |      |      |      |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
[L_MS] = LAYOUT(
   // left hand                                            // right hand
   KC_WH_L, KC_MS_U, KC_WH_R, KC_WH_U, KC_BTN1, _______,   _______, KC_BTN1, KC_WH_U, KC_WH_L, KC_MS_U, KC_WH_R,
   KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_BTN3, _______,   _______, KC_BTN3, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R,
   _______, _______, _______, _______, KC_BTN2, _______,   _______, KC_BTN2, _______, _______, _______, _______,
   _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______
),

/* Blank (copy when adding new layers)
 *
 * ,-----------------------------------------.  ,-----------------------------------------.
 * |      |      |      |      |      |      |  |      |      |      |      |      |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |  |      |      |      |      |      |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |  |      |      |      |      |      |      |
 * |------+------+------+------+------+------|  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |  |      |      |      |      |      |      |
 * `------+------+------+------+------+------'  `------+------+------+------+------+------'
 */
/*
[L_BLANK] = LAYOUT(
   // left hand                                            // right hand
   _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______,
   _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______,
   _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______,
   _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______
),
*/
};

const uint16_t PROGMEM fn_actions[] = {
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  // MACRODOWN only works in this function
  switch(id) {
    // Note: unused, just left in place from example code
  case 0:
    if (record->event.pressed) {
      register_code(KC_RSFT);
    } else {
      unregister_code(KC_RSFT);
    }
    break;
  }
  return MACRO_NONE;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
  return;
}

// Switch to a particular alpha layer
void switch_to_alpha(uint32_t layer) {
  default_layer_set(1UL << layer);
  layer_state = 1UL << layer;
}

// Tap dance function for selecting the default layer (alpha layout).
void tap_dance_alpha_layer(qk_tap_dance_state_t *state, void *user_data) {
  switch(state->count) {
  case 1:
    // A single tap goes to QWERTY
    switch_to_alpha(L_QW);
    break;
  case 2:
    // Two taps to Colemak
    switch_to_alpha(L_CM);
    break;
  case 3:
    // Three taps to Tarmak 1
    switch_to_alpha(L_T1);
    break;
  case 4:
    // Four taps to Tarmak 2
    switch_to_alpha(L_T2);
    break;
  case 5:
    // Five taps to Tarmak 3
    switch_to_alpha(L_T3);
    break;
  case 6:
    // Six taps to Tarmak 4
    switch_to_alpha(L_T4);
    break;
  default:
    // Anything else back to QWERTY
    switch_to_alpha(L_QW);
    break;
  }
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_L] = ACTION_TAP_DANCE_FN(tap_dance_alpha_layer),
};

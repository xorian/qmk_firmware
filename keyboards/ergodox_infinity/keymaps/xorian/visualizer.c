#include "simple_visualizer.h"
#include "util.h"

// Layer enums (shared with the keymap definition)
#include "xorian_layers.h"

static void get_visualizer_layer_and_color(visualizer_state_t* state) {
  uint8_t saturation = 255;
  uint8_t layer = biton32(state->status.layer);
  uint8_t hue = layer << 4;

  switch(layer) {
    // Alpha layouts and their mirrored variants
  case L_QW:
  case L_MQ:
    state->layer_text = "Qwerty";
    saturation = 0;
    break;
  case L_T1:
  case L_M1:
    state->layer_text = "Tarmak 1";
    saturation = 128;
    break;
  case L_T2:
  case L_M2:
    state->layer_text = "Tarmak 2";
    saturation = 128;
    break;
  case L_T3:
  case L_M3:
    state->layer_text = "Tarmak 3";
    saturation = 128;
    break;
  case L_T4:
  case L_M4:
    state->layer_text = "Tarmak 4";
    saturation = 128;
    break;
  case L_CM:
  case L_MC:
    state->layer_text = "Colemak";
    saturation = 128;
    break;
    // Momentary layers
  case L_NB:
    state->layer_text = "Numbers";
    break;
  case L_NV:
    state->layer_text = "Navigation";
    break;
  case L_SB:
    state->layer_text = "Symbols";
    break;
  case L_MS:
    state->layer_text = "Mouse";
    break;
  }
  state->target_lcd_color = LCD_COLOR(hue, saturation, 0xFF);
}

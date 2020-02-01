#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

/* Use I2C */

#define USE_I2C

/* Select hand configuration by EEPROM flag */

#define EE_HANDS

#undef TAPPING_TERM
#define TAPPING_TERM 300
#define RETRO_TAPPING
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD
#define PREVENT_STUCK_MODIFIERS

/* ws2812 RGB LEDs (7 on each half) */
/* Note: D3 here is labeled TX0 on the board, see:
   https://i.imgur.com/wMNx2u6.png
   https://deskthority.net/workshop-f7/how-to-use-a-pro-micro-as-a-cheap-controller-converter-like-soarer-s-t8448.html
 */
#undef RGB_DI_PIN
#define RGB_DI_PIN D3
#undef RGBLED_NUM
#define RGBLED_NUM 14
#define RGBLED_SPLIT { 7, 7 }
#define RGBLIGHT_ANIMATIONS

#endif

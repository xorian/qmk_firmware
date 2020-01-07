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

#endif

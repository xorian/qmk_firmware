// Each layer gets a name for readability, which is then used in the
// keymap matrix below.

// Note that using an enum rather than #defines provides
// auto-numbering.
enum {
  // Base alpha layers: QWERTY, COLEMAK, and transitional TARMAK 1-4.  See:
 
  // http://forum.colemak.com/viewtopic.php?id=1858
  
  L_QW = 0, // default layer : qwerty
  L_T1,     // alternate alpha layer : tarmak 1
  L_T2,     // alternate alpha layer : tarmak 2
  L_T3,     // alternate alpha layer : tarmak 3
  L_T4,     // alternate alpha layer : tarmak 4
  L_CM,     // alternate alpha layer : colemak

  // Momentary mirrored alpha layers, allowing one-handed typing of
  // any letter.  Inspired by Randall Munroe's "Mirrorboard":

  // https://blog.xkcd.com/2007/08/14/mirrorboard-a-one-handed-keyboard-layout-for-the-lazy/

  L_MQ, // mirror qwerty
  L_M1, // mirror tarmak 1
  L_M2, // mirror tarmak 2
  L_M3, // mirror tarmak 3
  L_M4, // mirror tarmak 4
  L_MC, // mirror colemak

  // Momentary layers, designed to be ambidextrous to encourage balanced
  // hand use.  Inspired by davkol's ambidextrous ErgoDox layout:

  // https://geekhack.org/index.php?topic=42772.msg1763886#msg1763886

  L_NB, // number layer
  L_NV, // navigation layer
  L_SB, // symbol layer
  L_MS, // mouse layer
};


/* ----------------------------------------------------------------------------
 * Copyright (c) 2013, 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * Maltron layout (see http://www.maltron.com/keyboard-info/the-maltron-letter-layout-advantage)
 *
 * Implements the "layout" section of '.../firmware/keyboard.h'
 */


#include "./fragments/includes.part.h"
#include "./fragments/macros.part.h"
#include "./fragments/types.part.h"
#include "./fragments/variables.part.h"


// ----------------------------------------------------------------------------
// keys
// ----------------------------------------------------------------------------

#include "./fragments/keys.part.h"


// ----------------------------------------------------------------------------
// LED control
// ----------------------------------------------------------------------------

#include "./fragments/led-control.part.h"


// ----------------------------------------------------------------------------
// matrix control
// ----------------------------------------------------------------------------

#include "./fragments/matrix-control.part.h"


// ----------------------------------------------------------------------------
// layout
// ----------------------------------------------------------------------------

static layout_t layout PROGMEM = {
// ............................................................................

    MATRIX_LAYER(  // layer 0 : default
// macro, unused,
       K,       nop,
// left hand ...... ......... ......... ......... ......... ......... .........
      F1,        F2,        F3,        F4,        F5,        F6,
       1,         2,         3,         4,         5,         6,
   garve,         q,         p,         y,         c,         b,
    caps,         a,         n,         i,         s,         f,
  shiftL,     comma,    period,         j,         g,     slash,
              ctrlL,      guiL,      altL,      dash,
                                                  bs,      home,       end,
                                                   e,       tab,     pageU,
                                                                     pageD,
// middle part .... ......... ......... ......... ......... ......... .........
     esc,       num,       kp7,       kp8,       kp9,     kpDiv,  lpupo1l1,
    caps,   kpEqual,       kp4,       kp5,       kp6,     kpMul,   volumeU,
   prScr,      scrl,       kp1,       kp2,       kp3,     kpSub,   volumeD,
   pause,       ins,       kp0,     kpDec,   kpEnter,     kpAdd,      mute,
// right hand ..... ......... ......... ......... ......... ......... .........
                 F7,        F8,        F9,       F10,       F11,       F12,
                  7,         8,         9,         0,     brktL,     brktR,
                  v,         m,         u,         z,         l,   bkslash,
                  d,         t,         h,         o,         r,     quote,
            semicol,         w,         k,      dash,         x,    shiftR,
                         equal,      altR,      guiR,     ctrlR,
  arrowL,    arrowR,       del,
  arrowU,     enter,     space,
  arrowD                     ),

// ............................................................................

    MATRIX_LAYER(  // layer 1 : keyboard functions
/// macro, unused,
       K,       nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     nop,       nop,       nop,       nop,       nop,       nop,
     nop,       nop,       nop,       nop,       nop,       nop,
     nop,       nop,       nop,       nop,       nop,       nop,
     nop,       nop,       nop,       nop,       nop,       nop,
     nop,       nop,       nop,       nop,       nop,       nop,
                nop,       nop,       nop,       nop,
                                                 nop,       nop,       nop,
                                                 nop,       nop,       nop,
                                                                       nop,
// middle part .... ......... ......... ......... ......... ......... .........
     nop,       nop,       nop,       nop,       nop,       nop,       nop,
     nop,       nop,       nop,       nop,       nop,       nop,       nop,
     nop,       nop,       nop,       nop,       nop,       nop,       nop,
     nop,       nop,       nop,       nop,       nop,       nop,     btldr,
// right hand ..... ......... ......... ......... ......... ......... .........
                nop,       nop,       nop,  dmp_sram,  dmp_prog,  dmp_eepr,
                nop,       nop,       nop,       nop,       nop,       nop,
                nop,       nop,       nop,       nop,       nop,       nop,
                nop,       nop,       nop,       nop,       nop,       nop,
                nop,       nop,       nop,       nop,       nop,       nop,
                           nop,       nop,       nop,       nop,
     nop,       nop,       nop,
     nop,       nop,       nop,
     nop                     )

// ............................................................................
};


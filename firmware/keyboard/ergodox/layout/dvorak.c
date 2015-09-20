/* ----------------------------------------------------------------------------
 * Copyright (c) 2013, 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * Dvorak layout (see https://en.wikipedia.org/wiki/Dvorak_Simplified_Keyboard)
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
   slash,     quote,     comma,    period,         p,         y,
    caps,         a,         o,         e,         u,         i,
  shiftL,   semicol,         q,         j,         k,         x,
            bkslash,     ctrlL,      guiL,      altL,
                                                  bs,      home,       end,
                                               space,       tab,     pageU,
                                                                     pageD,
// middle part .... ......... ......... ......... ......... ......... .........
lpupo2l2,       num,       kp7,       kp8,       kp9,     kpDiv,     prScr,
 volumeU,       esc,       kp4,       kp5,       kp6,     kpMul,     pause,
 volumeD,     grave,       kp1,       kp2,       kp3,     kpSub,      scrl,
    mute,   kpEqual,       kp0,     kpDec,   kpEnter,     kpAdd,      help,
// right hand ..... ......... ......... ......... ......... ......... .........
                 F7,        F8,        F9,       F10,       F11,       F12,
                  7,         8,         9,         0,     brktL,     brktR,
                  f,         g,         c,         r,         l,     equal,
                  d,         h,         t,         n,         s,      dash,
                  b,         m,         w,         v,         z,    shiftR,
                          altR,  lpupo1l1,      guiR,     ctrlR,
  arrowL,    arrowR,       del,
  arrowU,     enter,     space,
  arrowD                     ),

// ............................................................................

    MATRIX_LAYER(  // layer 1 : number pad
/// macro, unused,
       K,       nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,    transp,    transp,    transp,    transp,    transp,
  transp,    transp,    transp,    transp,    transp,    transp,
  transp,       kp7,       kp8,       kp9,     kpDiv,    transp,
  transp,       kp4,       kp5,       kp6,     kpMul,    transp,
  transp,       kp1,       kp2,       kp3,     kpSub,    transp,
                kp0,     kpDec,   kpEnter,     kpAdd,
                                              transp,    transp,    transp,
                                              transp,    transp,    transp,
                                                                    transp,
// middle part .... ......... ......... ......... ......... ......... .........
  transp,    transp,    transp,    transp,    transp,    transp,    transp,
  transp,    transp,    transp,    transp,    transp,    transp,    transp,
  transp,    transp,    transp,    transp,    transp,    transp,    transp,
  transp,    transp,    transp,    transp,    transp,    transp,    transp,
// right hand ..... ......... ......... ......... ......... ......... .........
             transp,    transp,    transp,    transp,    transp,    transp,
             transp,    transp,    transp,    transp,    transp,    transp,
             transp,    transp,    transp,    transp,    transp,    transp,
             transp,    transp,    transp,    transp,    transp,    transp,
             transp,    transp,    transp,    transp,    transp,    transp,
                        transp,    transp,    transp,    transp,
    home,       end,    transp,
    pageU,    transp,   transp,
    pageD                    ),

// ............................................................................

    MATRIX_LAYER(  // layer 2 : keyboard functions
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


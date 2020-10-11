#pragma once

#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avr/io.h>
  #include <avr/interrupt.h>
#endif
#endif



#define LAYOUT_ergodox(\
  L00, L01, L02, L03, L04, L05, L06,\
  L10, L11, L12, L13, L14, L15, L16,\
  L20, L21, L22, L23, L24, L25,\
  L30, L31, L32, L33, L34, L35,L36,\
     L40, L41, L42, L43, L44, \
                               L07,L17,\
                           L45,L46,L27,\
                                   L37,\
R50, R51, R52, R53, R54, R55, R56,\
R60, R61, R62, R63, R64, R65, R66,\
     R70, R71, R72, R73, R74, R75,\
R80, R81, R82, R83, R84, R85,R86, \
          R90, R91, R92, R93, R94,          \
\
R67,R57,\
R77,R96,R95,\
R87\
   ) \
  { \
    { L00,   L01,   L02, L03, L04, L05, L06,  L07   }, \
    { L10,   L11,   L12, L13, L14, L15, L16,  L17   }, \
    { L20,   L21,   L22, L23, L24, L25, KC_NO,L27   }, \
    { L30,   L31,   L32, L33, L34, L35, L36,  L37   }, \
    { L40,   L41,   L42, L43, L44, L45, L46,  KC_NO }, \
\
    { R56, R55, R54, R53, R52, R51, R50, R57 }, \
    { R66, R65, R64, R63, R62, R61, R60, R67 },\
    { R75, R74, R73, R72, R71, R70, KC_NO, R77 }, \
    { R86, R85, R84, R83, R82, R81, R80, R87 }, \
    { R94, R93, R92, R91, R90, R95, R96, KC_NO} \
}
  
#pragma once

#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avr/io.h>
  #include <avr/interrupt.h>
#endif
#endif


#define LAYOUT( \
	K00, K01, K02, K03, K04, K05,   \
	K10, K11, K12, K13,           \
	K20, K21, K22, K23,           \
	K30, K31, K32, K33, K34, K35, \
	K40, K41, K42, K43, K44, K45, \
	K50, K51, K52, K53, K54, K55, \
	K60, K61, K62, K63, K64, K65  \
) { \
	{ K00,   K01,   K02,   K03,   K04,   K05 }, \
	{ K10,   K11,   K12,   K13,   KC_NO, KC_NO }, \
	{ K20,   K21,   K22,   K23,   KC_NO, KC_NO }, \
	{ K30,   K31,   K32,   K33,   K34,   K35 }, \
	{ K40,   K41,   K42,   K43,   K44,   K45 }, \
	{ K50,   K51,   K52,   K53,   K54,   K55 }, \
	{ K60,   K61,   K62,   K63,   K64,   K65 }  \
}

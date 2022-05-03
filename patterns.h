#ifndef __PATTERNS_H
#define __PATTERNS_H

#include <vram.h>


extern pattern_t pattern_frog_front;
extern pattern_t pattern_frog_back;
extern pattern_t pattern_frog_side;

extern pattern_t pattern_car_bottom_left;
extern pattern_t pattern_car_bottom_right;
extern pattern_t pattern_car_top_left;
extern pattern_t pattern_car_top_right;



#define PMFA_FROG_FRONT ((uint8_t)1)
#define PMFA_FROG_BACK ((uint8_t)2)
#define PMFA_FROG_SIDE ((uint8_t)3)

#define PMFA_CAR_BOTTOM_LEFT ((uint8_t)4)
#define PMFA_CAR_BOTTOM_RIGHT ((uint8_t)5)
#define PMFA_CAR_TOP_LEFT ((uint8_t)6)
#define PMFA_CAR_TOP_RIGHT ((uint8_t)7)

void pattern_load_all(void);

#endif

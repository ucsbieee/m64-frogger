#include "patterns.h"


void pattern_load_background(const pattern_t pattern, const uint8_t pmba);
void pattern_load_foreground(const pattern_t pattern, const uint8_t pmfa);

void pattern_load_all(void) {
    pattern_load_foreground(pattern_frog_front, PMFA_FROG_FRONT);
    pattern_load_foreground(pattern_frog_back, PMFA_FROG_BACK);
    pattern_load_foreground(pattern_frog_side, PMFA_FROG_SIDE);
    pattern_load_foreground(pattern_car_bottom_left, PMFA_CAR_BOTTOM_LEFT);
    pattern_load_foreground(pattern_car_bottom_right, PMFA_CAR_BOTTOM_RIGHT);
    pattern_load_foreground(pattern_car_top_left, PMFA_CAR_TOP_LEFT);
    pattern_load_foreground(pattern_car_top_right, PMFA_CAR_TOP_RIGHT);
}

void pattern_load_background(const pattern_t pattern, const uint8_t pmba) {
    uint8_t i;
    for (i = 0; i < 16; i++) PMB[pmba][i] = pattern[i];
}
void pattern_load_foreground(const pattern_t pattern, const uint8_t pmfa) {
    uint8_t i;
    for (i = 0; i < 16; i++) PMF[pmfa][i] = pattern[i];
}

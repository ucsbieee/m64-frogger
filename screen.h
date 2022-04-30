#include "layout.h"

#ifndef __SCREEN_H
#define __SCREEN_H

typedef struct row_s {
    uint8_t layout;
    uint8_t offset;
    sint8_t velocity;
    uint8_t ombas[64];
    uint8_t num_obmas;
} row_t;

extern row_t screen[15];

void screen_randomize(void);

void row_clear_ombas(row_t * row);
void row_fill_obmas(row_t * row);
void screen_fill_obmas(void);

#endif

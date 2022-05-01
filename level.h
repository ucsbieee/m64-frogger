
#ifndef __LEVEL_H
#define __LEVEL_H

#include "layout.h"

typedef struct row_s {
    uint8_t layout;
    uint8_t offset;
    sint8_t velocity;
    uint8_t ombas[64];
    uint8_t num_obmas;
} row_t;

extern row_t level[15];

void level_randomize(void);

void row_clear_ombas(row_t * row);
void row_fill_obmas(row_t * row);
void level_fill_obmas(void);

void level_draw(void);

#endif
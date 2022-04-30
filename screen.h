#include "layout.h"

#ifndef SCREEN_H
#define SCREEN_H

typedef struct row_s {
    const uint8_t layout;
    uint8_t offset;
    sint8_t velocity;
} row_t;

extern row_t screen[15];

void screen_randomize(void);
#endif
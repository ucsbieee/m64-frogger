#ifndef __FROG_H
#define __FROG_H

#include <int.h>

typedef struct frog_s {
    sint16_t frog_x;
    sint16_t frog_y;
} frog_t;


void frog_moveup(frog_t * f);
void frog_movedown(frog_t * f);
void frog_moveright(frog_t * f);
void frog_moveleft(frog_t * f);
bool frog_hit(frog_t * f);

#endif

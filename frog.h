#ifndef __FROG_H
#define __FROG_H

typedef struct frog_s {
    sint16_t frog_x;
    sint16_t frog_y;
} frog_t;


void frog_moveup(void);
void frog_movedown(void);
void frog_moveright(void);
void frog_moveleft(void);

#endif

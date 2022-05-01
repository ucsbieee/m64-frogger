//30x32
#include "frog.h"


void frog_moveup(frog_t * f) {
    f->frog_y += 8;

    if(f->frog_y > 232|| f->frog_y < 0){
        f->frog_y = 0;
    }
}

void frog_movedown(frog_t * f) {
    f->frog_y -= 8;

    if(f->frog_y > 232|| f->frog_y < 0){
        f->frog_y = 0;
    }
}

void frog_moveright(frog_t * f) {
    f->frog_x += 8;

    if(f->frog_x > 248 || f->frog_x < 0){
        f->frog_x = 0;
    }
}

void frog_moveleft(frog_t * f) {
    f->frog_x -= 8;

    if(f->frog_x > 248 || f->frog_x < 0){
        f->frog_x = 0;
    }
}

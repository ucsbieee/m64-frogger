//30x32
#include "frog.h"
#include "level.h"
#include "layout.h"

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

bool frog_hit(frog_t * f){
    int frog_row = f->frog_y / 16;
    int frog_tile = f->frog_x / 16;

    uint8_t frog_currtile = layouts[level[frog_row].layout][frog_tile];
    
    return frog_currtile != TILE_EMPTY;
    
}

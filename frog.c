//30x32
#include "frog.h"


void frog_moveup(void){
    frog.frog_y += 8;
    
    if(frog.frog_y > 232|| frog.frog_y < 0){
        frog.frog_y = 0;
    }
}

void frog_movedown(void){
    frog.frog_y -= 8;
    
    if(frog.frog_y > 232|| frog.frog_y < 0){
        frog.frog_y = 0;
    }
}

void frog_moveright(void){
    frog.frog_x += 8;
    
    if(frog.frog_x > 248 || frog.frog_x < 0){
        frog.frog_x = 0;
    }
}

void frog_moveleft(void){
    frog.frog_x -= 8;
    
    if(frog.frog_x > 248 || frog.frog_x < 0){
        frog.frog_x = 0;
    }
}
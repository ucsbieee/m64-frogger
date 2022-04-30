#include "screen.h"
#include <stdlib.h>

row_t screen[15];

void screen_randomize(void){
    int i = 0;
    int var;
    for(i =0; i < 15; i++){
        screen[i].layout = rand()%num_layouts;
    }

    for(i=0; i<15; i++){
        var = rand()%4;
        if(var == 0){
            var = -1;
        }
        else if(var == 3){
            var = -2;
        }
        screen[i].velocity = var;
    }

    for(i=0; i<15; i++){
        screen[i].offset = rand();
    }

}
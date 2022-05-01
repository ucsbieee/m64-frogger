#include "level.h"
#include <stdlib.h>
#include "obma_stack.h"

row_t level[15];

void level_randomize(void){
    int i = 0;
    int var;
    for(i =0; i < 15; i++){
        level[i].layout = rand()%num_layouts;
    }

    for(i=0; i<15; i++){
        var = rand()%4;
        if(var == 0){
            var = -1;
        }
        else if(var == 3){
            var = -2;
        }
        level[i].velocity = var;
    }

    for(i=0; i<15; i++){
        level[i].offset = rand();
    }

}

void row_clear_ombas(row_t * row) {
    obma_stack_push(row->ombas, row->num_obmas);
    row->num_obmas = 0;
}
void row_fill_obmas(row_t * row) {
    uint8_t i;
    row_clear_ombas(row); // reset rows
    for (i = 0; i < 16; i++) {
        row->num_obmas += (layouts[row->layout] != TILE_EMPTY);
        // row->num_obmas stores number of non-empty tiles
    }
    row->num_obmas *= 4; // tiles are 4x4
    obma_stack_pop(row->num_obmas, row->num_obmas);
}
void level_fill_obmas(void) {
    uint8_t i;
    for (i = 0; i < 15; i++) {
        row_fill_obmas(level + i);
    }
}

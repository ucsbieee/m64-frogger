
#include "level.h"
#include "vram.h"
#include <stdlib.h>
#include "layout.h"

#define LEVEL_OBM_START ((uint8_t)1)
#define LEVEL_OBM_END   ((uint8_t)60)


row_t level[15];


void level_randomize(void){
    uint8_t i;
    sint8_t var;

    for (i =0; i < 15; i++) {
        // choose a random layout
        level[i].layout = rand()%num_layouts;

        // choose a random velocity
        var = rand()%4;
        if      (var == 0) var = -1;
        else if (var == 3) var = -2;
        level[i].velocity = var;

        // choose random starting offset
        level[i].offset = rand();
    }
}


void level_draw_update(void) {
    uint8_t rowindex, tileindex, ombaindex = LEVEL_OBM_START;

    uint8_t curr_tile, curr_offset;

    for (rowindex = 0; rowindex < 15; rowindex++) {

        for (tileindex = 0; tileindex < 16; tileindex++) {

            curr_tile = layouts[level[rowindex].layout][tileindex];
            curr_offset = level[rowindex].offset;

            if (curr_tile != TILE_EMPTY) {
                OBM[ombaindex + 0].x = curr_offset + (tileindex * 16);
                OBM[ombaindex + 1].x = curr_offset + (tileindex * 16) + 8;
                OBM[ombaindex + 2].x = curr_offset + (tileindex * 16);
                OBM[ombaindex + 3].x = curr_offset + (tileindex * 16) + 8;

                OBM[ombaindex + 0].y = (rowindex * 16);
                OBM[ombaindex + 1].y = (rowindex * 16);
                OBM[ombaindex + 2].y = (rowindex * 16) + 8;
                OBM[ombaindex + 3].y = (rowindex * 16) + 8;

                ombaindex += 4;

                if (ombaindex == LEVEL_OBM_END)
                    return;
            }
        }

    }
}

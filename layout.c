#include "layout.h"
#include "patterns.h"

const layout_t layouts[] = {
    {
        TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY,
        TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY
    }, {
        TILE_CAR,   TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY,
        TILE_CAR,   TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY, TILE_EMPTY
    }
};

const uint8_t num_layouts = 2;

const uint8_t tile_to_pattern[5][4] = {
    {   // TILE_EMPTY
        0,
        0,
        0,
        0
    }, { // TILE_TURT
        0,
        0,
        0,
        0
    }, { // TILE_LOG
        0,
        0,
        0,
        0
    }, { // TILE_CAR
        PMFA_CAR_TOP_LEFT,
        PMFA_CAR_TOP_RIGHT,
        PMFA_CAR_BOTTOM_LEFT,
        PMFA_CAR_BOTTOM_RIGHT
    }, { // TILE_GATOR
        0,
        0,
        0,
        0
    }
};


#ifndef __LAYOUT_H
#define __LAYOUT_H

#include <int.h>

#define TILE_EMPTY  ((uint8_t)0)
#define TILE_TURT   ((uint8_t)1)
#define TILE_LOG    ((uint8_t)2)
#define TILE_CAR    ((uint8_t)3)
#define TILE_GATOR  ((uint8_t)4)

typedef uint8_t layout_t[16];

extern const layout_t layouts[];
extern const uint8_t num_layouts;

#endif


// ==================== main.c ==================== //
// Follow this file template to implement your game //
// ================================================ //

#define SIM 1  // change value depending if running simulation or not

// ================================ //
#pragma code - name("CODE")
#pragma bss - name("BSS")

#include <Q9_6.h>
#include <controller.h>
#include <int.h>
#include <mapache64_zero_page.h>
#include <screen.h>
#include <stop.h>
#include <vram.h>

#include "patterns.h"
#include "screen.h"

// run once on startup
void reset(void) {}

// run 60 times a second
void do_logic(void) {}

// run after do_logic and once gpu is idle
void fill_vram(void) {
    uint8_t i, j;

    for (i = 0; i < 64; i++) {
        OBM[i].y = 255;
    }

    load_foreground_pattern(mogus_pattern, 0);

    for(i = 0; i < 16; i++)
        PMB[0][i] = 0xFF;

    for (i = 0; i < 64  ; i++) {
        OBM[i].x = i * 4;
        OBM[i].y = j;
        OBM[i].pattern_config = 0;
        OBM[i].color = RED_C_MASK;
        j += 10;
        if (j > 240) j = 0;
    }

    TXBL[20][15] = 'L' | COLOR_SELECT_MASK;
    TXBL[20][16] = 'O' | COLOR_SELECT_MASK;
    TXBL[20][17] = 'L' | COLOR_SELECT_MASK;

    background_palette = GREEN_C0_MASK | BLUE_C1_MASK;

    for (i = 0; i < 30; i+=2) {
        for (j = 0; j < 32; j += 4) {
            if (j==0 && i % 8 == 0) j += 2;
            NTBL[i][j] = 0 | COLOR_SELECT_MASK;
            NTBL[i+1][j] = COLOR_SELECT_MASK;
            NTBL[i+1][j+1] = COLOR_SELECT_MASK;
            NTBL[i][j+1] = COLOR_SELECT_MASK;
        }
    }

    screen[0].layout = &layouts[0];
    
    stop();
}

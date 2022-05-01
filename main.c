
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
#include "level.h"

// run once on startup
void reset(void) {}

// run 60 times a second
void do_logic(void) {}

// run after do_logic and once gpu is idle
void fill_vram(void) {

    level[0].offset = 0;

    stop();
}

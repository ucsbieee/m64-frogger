#ifndef __PATTERNS_H
#define __PATTERNS_H

#include <vram.h>

extern pattern_t mogus_pattern;
const uint8_t mogus_pmfa = 0;

void load_background_pattern(const pattern_t pattern, const uint8_t pmba);
void load_foreground_pattern(const pattern_t pattern, const uint8_t pmfa);

#endif

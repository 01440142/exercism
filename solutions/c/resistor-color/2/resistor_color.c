#include "resistor_color.h"

resistor_band_t rbands[] = { COLORS };

resistor_band_t *colors(void) {
    return rbands;
}

uint8_t color_code(resistor_band_t rband) {
    return rband;
}
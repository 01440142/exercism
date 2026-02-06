#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

#include <stdlib.h>
#include <stdint.h>

typedef enum {
    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE,
} resistor_band_t;

resistor_band_t *colors(void);
int8_t color_code(resistor_band_t rband);

#endif

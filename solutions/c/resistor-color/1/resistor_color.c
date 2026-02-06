#include "resistor_color.h"

resistor_band_t rbands[] = {
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
};

resistor_band_t *colors() {
    return rbands;
}

int8_t color_code(resistor_band_t rband) {
    return rband;
}
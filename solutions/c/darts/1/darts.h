#ifndef DARTS_H
#define DARTS_H

#include <math.h>
#include <stdint.h>

#define OUTER_CIRCLE 10.0f
#define MIDDLE_CIRCLE 5.0f
#define INNER_CIRCLE 1.0f

typedef struct {
  float x, y;
} coordinate_t;

uint8_t score(coordinate_t c);

#endif
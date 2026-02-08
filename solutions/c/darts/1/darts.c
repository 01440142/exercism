#include "darts.h"

uint8_t score(coordinate_t c) {
  float distance = sqrtf(powf(fabs(c.x), 2) + powf(fabs(c.y), 2)) ;

  if (distance <= INNER_CIRCLE)
    return 10;
  if (distance <= MIDDLE_CIRCLE)
    return 5;
  if (distance <= OUTER_CIRCLE)
    return 1;

  return 0;
}
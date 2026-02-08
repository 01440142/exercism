#include "darts.h"

uint8_t score(coordinate_t coordinate) {
  float distance = hypot(coordinate.x, coordinate.y) ;

  if (distance <= INNER_CIRCLE)
    return 10;
  if (distance <= MIDDLE_CIRCLE)
    return 5;
  if (distance <= OUTER_CIRCLE)
    return 1;

  return 0;
}
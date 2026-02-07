#include "collatz_conjecture.h"

int16_t steps(int32_t start) {
  if (start <= 0)
    return ERROR_VALUE;
  uint16_t i;
  for (i = 0; start != 1; i++)
    start = (start % 2) ? (start * 3 + 1) : (start / 2);
  return i;
}
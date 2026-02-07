#include "grains.h"

uint64_t square(uint8_t index) {
  if (!index || index > MAX)
    return false;
  uint64_t sum = 1;
  for (uint8_t i = 1; i < index; i++)
    sum = sum * 2;
  return sum;
}

uint64_t total(void) {
  uint64_t total = 0;
  for (uint8_t i = 1; i <= MAX; i++)
    total += square(i);
  return total;
}
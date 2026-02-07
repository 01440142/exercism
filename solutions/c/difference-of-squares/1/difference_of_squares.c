#include "difference_of_squares.h"

uint32_t sum_of_squares(uint32_t number) {
  uint32_t sum = 1;
  for (; number > 1; number--)
    sum += number * number;
  return sum;
}

uint32_t square_of_sum(uint32_t number) {
  uint32_t sum = 1;
  for (; number > 1; number--)
    sum += number;
  return sum * sum;
}

uint32_t difference_of_squares(uint32_t number) {
  return square_of_sum(number) - sum_of_squares(number);    
}
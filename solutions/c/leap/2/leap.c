#include "leap.h"

bool leap_year(uint16_t year) {
  return !(year % 4) && (year % 100 || !(year % 400));
}
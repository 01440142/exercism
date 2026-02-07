#ifndef QUEEN_ATTACK_H
#define QUEEN_ATTACK_H

#include <stdbool.h>
#include <stdint.h>

#define LEN 8

typedef enum { CAN_NOT_ATTACK, CAN_ATTACK, INVALID_POSITION } attack_status_t;
typedef struct {
  uint8_t row;
  uint8_t column;
} position_t;

attack_status_t can_attack(position_t queen_1, position_t queen_2);
bool on_board(position_t p);
bool same_position(position_t p1, position_t p2);

#endif
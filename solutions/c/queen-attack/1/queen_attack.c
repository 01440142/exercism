#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
  if (!on_board(queen_1))
    return INVALID_POSITION;
  if (!on_board(queen_2))
    return INVALID_POSITION;
  if (same_position(queen_1, queen_2))
    return INVALID_POSITION;

  if (queen_1.column == queen_2.column)
    return CAN_ATTACK;
  if (queen_1.row == queen_2.row)
    return CAN_ATTACK;
  
  position_t temp;
  for (uint8_t i = 0; i < LEN; i++) {
    temp.column = (queen_1.column + i) % LEN;
    temp.row = (queen_1.row - i + LEN) % LEN;
    if (same_position(temp, queen_2))
      return CAN_ATTACK;
    temp.column = (queen_1.column + i) % LEN;
    temp.row = (queen_1.row + i) % LEN;
    if (same_position(temp, queen_2))
      return CAN_ATTACK;
  }

  return CAN_NOT_ATTACK;
}

bool on_board(position_t p) {
  return (p.column < LEN && p.row < LEN);
}

bool same_position(position_t p1, position_t p2) {
  return (p1.column == p2.column && p1.row == p2.row);
}
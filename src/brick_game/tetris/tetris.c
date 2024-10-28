#include "tetris.h"

void start_state() {
  GameInfo_t *game_state;
  game_state->pause = false;
  game_state->speed = 1;
  game_state->level = 1;
  game_state->score = 0;
  game_state->x = 5;
  game_state->y = 10;
  game_state->field = create_field(10, 20);
  int **next;

  int high_score;
}

int main() { return 0; }
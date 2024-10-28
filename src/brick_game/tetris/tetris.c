#include "tetris.h"

void start_state() {
  GameInfo_t *game_state;
  game_state->pause = false;
  game_state->speed = 1;
  game_state->level = 1;
  game_state->score = 0;
  game_state->x = 5;
  game_state->y = 10;
  game_state->field = create_field(WIDTH, HEIGHT);
  int **next;
  int high_score;
}

int create_field(int width, int height) {
  int **field = NULL;

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      printf("x");
    }
  }
  return field;
}

int main() {
  create_field(10, 20); 
  return 0; 
  }
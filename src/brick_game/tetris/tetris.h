#ifndef TETRIS_H
#define TETRIS_H

#include <math.h>
#include <stdio.h>

#define FIELD_X 10
#define FIELD_Y 20
typedef enum {
  Start,
  Pause,
  Terminate,
  Left,
  Right,
  Up,
  Down,
  Action
} UserAction_t;

typedef struct {
  int **field;
  int **next;
  int score;
  int high_score;
  int level;
  int speed;
  bool pause;
  int x;
  int y;
} GameInfo_t;

void userInput(UserAction_t action, bool hold);

GameInfo_t updateCurrentState();
void start_state();

#endif
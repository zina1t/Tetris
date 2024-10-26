# Tetris
## Introuction

The project must consist of two parts to implement the Tetris game: a library that implements the logic of the game, which can be connected to different GUIs in the future, and a terminal interface. The logic of the library must be implemented using finite-state machines, one of the possible descriptions of which is given below.

To formalize the logic of this game, the following variant of a finite state machine can be introduced:

![tetris](https://github.com/user-attachments/assets/d5e29000-6662-46a0-8dea-835b321f2cce)


This FSM has the following states:

Start is the state in which the game waits for the player to press the ready button.

Spawn is the state the game enters when you create another block and select the next block to spawn.

Moving is the main game state with user input processing — rotating blocks/moving blocks horizontally.

Move is the state the game enters after the timer runs out. It moves the current block down one level.

Attaching is the state the game enters after the current block "touches" the already fallen blocks or the ground. If full rows are created, it is destroyed and the remaining blocks are moved down. If a block is stopped in the top row, the game enters the "game over" state.

Game over is the end of the game.

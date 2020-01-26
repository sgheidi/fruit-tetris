#include "../include/common.h"

// initialize global classes
Utility Util;
Tetronimo_1 Tetronimo1;
Tetronimo_2 Tetronimo2;
Tetronimo_3 Tetronimo3;
Tetronimo_4 Tetronimo4;
Tetronimo_5 Tetronimo5;
Tetronimo_6 Tetronimo6;
Tetronimo_7 Tetronimo7;
Board GameBoard;

GLFWwindow* window;

// screen width & height (pixels)
const int ScreenX = 250;
const int ScreenY = 500;

// Area of 1 block (pixels)
const float unit = ScreenX/10;

int blocks[11][21] = {0};
int colors[11][21] = {0};

float x = unit*5;
float y = 0;

int NumIterations = 0;
bool Paused = false;
bool GameOver = false;
int Rand = 0;

// Decrease this to increase game speed
// Default should be 50
int GameSpeed = 30;

int row = 0;
int col = 0;

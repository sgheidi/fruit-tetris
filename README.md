# Fruit Tetris

A simple, elegant Tetris implementation written in OpenGL/C++ using GLFW framework.

## Screenshots

![Alt text](screenshots/3.png?raw=true "Screenshot 1") &nbsp; &nbsp; &nbsp; ![Alt text](screenshots/4.png?raw=true "T-Spin!")

## Setting up

Before attempting to play the game, visit [glfw.org](https://www.glfw.org/) and build the library from source using CMake.

Play the game by running ```make && ./FruitTetris``` in the Linux terminal.

## How to play

- 'p': pause

- 'r': restart

- 'q' or 'ESC': exit

- Up key: rotate piece

- Left/right keys: horizontal movement

- Down key: downward acceleration

- Speed & score increases with each line clear!

## Other notes

- Code follows Google C++ Style

- Code is well commented, easy to read and modify

- Code broken up into classes and objects for good structure

- All game options are stored in the file ```common.cc``` and can be modified

## Future goals

- 'Spacebar': 'hard' drops a piece, dropping it instantly

- 'Outline' feature: Outline the region where the current tetronimo would drop if 'spacebar' was pressed

- 'Shift': holds a piece, swapping current piece with held piece (in a queue)

- 'Next piece' feature: shows next 4 pieces in queue

- 'Tab': Use an 'item' which temporarily grants a special ability (i.e only long pieces for 10 seconds, clears 7 of the bottom lines, etc)

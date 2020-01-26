#include "../include/utility.h"
#include "../include/common.h"

void Tetronimo_2::RenderTetronimo() {
  glPushMatrix();
  switch(Tetronimo2.RotationCounter) {
    case 0:
      Util.DrawSquare(GREEN);
      glTranslatef(-1*unit, unit, 0.0f);
      Util.DrawSquare(RED);
      glTranslatef(unit, 0.0f, 0.0f);
      Util.DrawSquare(PURPLE);
      glTranslatef(unit, 0.0f, 0.0f);
      Util.DrawSquare(ORANGE);
      break;
    case 1:
      glTranslatef(-1*unit, unit, 0.0f);
      Util.DrawSquare(GREEN);
      glTranslatef(unit, unit, 0.0f);
      Util.DrawSquare(RED);
      glTranslatef(0.0f, -1*unit, 0.0f);
      Util.DrawSquare(PURPLE);
      glTranslatef(0.0f, -1*unit, 0.0f);
      Util.DrawSquare(ORANGE);
      break;
    case 2:
      glTranslatef(0.0f, 2*unit, 0.0f);
      Util.DrawSquare(GREEN);
      glTranslatef(unit, -1*unit, 0.0f);
      Util.DrawSquare(RED);
      glTranslatef(-1*unit, 0.0f, 0.0f);
      Util.DrawSquare(PURPLE);
      glTranslatef(-1*unit, 0.0f, 0.0f);
      Util.DrawSquare(ORANGE);
      break;
    case 3:
      glTranslatef(unit, unit, 0.0f);
      Util.DrawSquare(GREEN);
      glTranslatef(-1*unit, -1*unit, 0.0f);
      Util.DrawSquare(RED);
      glTranslatef(0.0f, unit, 0.0f);
      Util.DrawSquare(PURPLE);
      glTranslatef(0.0f, unit, 0.0f);
      Util.DrawSquare(ORANGE);
      break;
  }
  glPopMatrix();
}

bool Tetronimo_2::InWindowLeft(){
  switch (Tetronimo2.RotationCounter) {
    case 0:
      return col >= 3;
      break;
    case 1:
      return col >= 3;
      break;
    case 2:
      return col >= 3;
      break;
    case 3:
      return col >= 2;
      break;
    }
}

bool Tetronimo_2::InWindowRight() {
  switch (Tetronimo2.RotationCounter) {
    case 0:
      return col <= 8;
      break;
    case 1:
      return col <= 9;
      break;
    case 2:
      return col <= 8;
      break;
    case 3:
      return col <= 8;
      break;
    }
}

void Tetronimo_2::FillBlocks(){
  switch (Tetronimo2.RotationCounter) {
    case 0:
      blocks[col][row-1] = 1;
      blocks[col-1][row-1] = 1;
      blocks[col+1][row-1] = 1;
      blocks[col][row-2] = 1;
      break;
    case 1:
      blocks[col][row-1] = 1;
      blocks[col][row] = 1;
      blocks[col][row-2] = 1;
      blocks[col-1][row-1] = 1;
      break;
    case 2:
      blocks[col+1][row-1] = 1;
      blocks[col][row-1] = 1;
      blocks[col][row] = 1;
      blocks[col-1][row-1] = 1;
      break;
    case 3:
      blocks[col+1][row-1] = 1;
      blocks[col][row-1] = 1;
      blocks[col][row] = 1;
      blocks[col][row-2] = 1;
      break;
  }
}

void Tetronimo_2::FillColors(){
  switch (Tetronimo2.RotationCounter) {
    case 0:
      colors[col+1][row-1] = ORANGE;
      colors[col][row-2] = GREEN;
      colors[col][row-1] = PURPLE;
      colors[col-1][row-1] = RED;
      break;
    case 1:
      colors[col][row-1] = PURPLE;
      colors[col][row] = RED;
      colors[col][row-2] = ORANGE;
      colors[col-1][row-1] = GREEN;
      break;
    case 2:
      colors[col][row] = GREEN;
      colors[col+1][row-1] = RED;
      colors[col][row-1] = PURPLE;
      colors[col-1][row-1] = ORANGE;
      break;
    case 3:
      colors[col+1][row-1] = GREEN;
      colors[col][row-2] = RED;
      colors[col][row-1] = PURPLE;
      colors[col][row] = ORANGE;
      break;
  }
}

/* Collision functions return true if a potential collision is detected */
// note that pivot coordinates are blocks[col][row]
bool Tetronimo_2::CheckCollisionRight() {
  switch (Tetronimo2.RotationCounter){
    case 0:
      if(blocks[col+2][row] == 1 || blocks[col+1][row-1] == 1) {
        return true;
      }
      break;
    case 1:
      if(blocks[col+1][row-1] == 1 || blocks[col+1][row] == 1
      || blocks[col+1][row+1] == 1){
        return true;
      }
      break;
    case 2:
      if(blocks[col+2][row] == 1 || blocks[col+1][row+1] == 1){
        return true;
      }
      break;
    case 3:
      if(blocks[col+2][row] == 1 || blocks[col+1][row+1] == 1
      || blocks[col+1][row-1] == 1){
        return true;
      }
      break;
  }
  return false;
}

// note that pivot coordinates are blocks[col][row]
bool Tetronimo_2::CheckCollisionLeft() {
  switch (Tetronimo2.RotationCounter) {
    case 0:
      if(blocks[col-2][row] == 1 || blocks[col-1][row-1] == 1){
        return true;
      }
      break;
    case 1:
      if(blocks[col-2][row] == 1 || blocks[col-1][row-1] == 1
      || blocks[col-1][row+1] == 1){
        return true;
      }
      break;
    case 2:
      if(blocks[col-2][row] == 1 || blocks[col-1][row+1] == 1){
        return true;
      }
      break;
    case 3:
      if(blocks[col-1][row-1] == 1 || blocks[col-1][row] == 1
      || blocks[col-1][row+1] == 1){
        return true;
      }
      break;
  }
  return false;
}

// Fill blocks and colors
// Used when a tetronimo 'drops' on board
void Tetronimo_2::FillArrays() {
  this->FillBlocks();
  this->FillColors();
}

// if any condition for stacking is detected, returns true
bool Tetronimo_2::LandingCriteria(){
  switch(Tetronimo2.RotationCounter){
    case 0:
      if (row >= 21 || blocks[col-1][row] == 1 || blocks[col][row] == 1
      || blocks[col+1][row] == 1) {
        return true;
      }
      break;
    case 1:
      if (row >= 20 || blocks[col-1][row] == 1 || blocks[col][row+1] == 1) {
        return true;
      }
      break;
    case 2:
      if (row >= 20 || blocks[col-1][row] == 1 || blocks[col][row+1] == 1
      || blocks[col+1][row] == 1) {
        return true;
      }
      break;
    case 3:
      if (row >= 20 || blocks[col][row+1] == 1 || blocks[col+1][row] == 1) {
        return true;
      }
      break;
    }
      return false;
}

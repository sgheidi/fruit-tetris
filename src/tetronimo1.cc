#include "../include/utility.h"
#include "../include/common.h"

void Tetronimo_1::RenderTetronimo() {
  glPushMatrix();
  switch (Tetronimo1.RotationCounter) {
    case 0:
      Util.DrawSquare(1);
      glTranslatef(0.0f, unit, 0.0f);
      Util.DrawSquare(2);
      glTranslatef(0.0f, unit, 0.0f);
      Util.DrawSquare(3);
      glTranslatef(0.0f, unit, 0.0f);
      Util.DrawSquare(4);
      break;
    case 1:
      glTranslatef(unit, unit, 0.0f);
      Util.DrawSquare(1);
      glTranslatef(-unit, 0.0f, 0.0f);
      Util.DrawSquare(2);
      glTranslatef(-unit, 0.0f, 0.0f);
      Util.DrawSquare(3);
      glTranslatef(-unit, 0.0f, 0.0f);
      Util.DrawSquare(4);
      break;
    }
  glPopMatrix();
}

void Tetronimo_1::ResetUnits(){
  x = unit*5;
  y= 0;
  row = 1;
  col = 6;
}

bool Tetronimo_1::InWindowLeft(){
  switch (Tetronimo1.RotationCounter) {
    case 0:
      return col >= 2;
      break;
    case 1:
      return col >= 4;
      break;
  }
}

bool Tetronimo_1::InWindowRight(){
  switch (Tetronimo1.RotationCounter) {
    case 0:
      return col <= 9;
      break;
    case 1:
      return col <= 8;
      break;
  }
}

void Tetronimo_1::FillBlocks(){
  switch (Tetronimo1.RotationCounter) {
    case 0:
      blocks[col][row-1] = 1;
      blocks[col][row] = 1;
      blocks[col][row+1] = 1;
      blocks[col][row+2] = 1;
      break;
    case 1:
      blocks[col+1][row] = 1;
      blocks[col][row] = 1;
      blocks[col-1][row] = 1;
      blocks[col-2][row] = 1;
      break;
  }
}

void Tetronimo_1::FillColors(){
  switch (Tetronimo1.RotationCounter) {
    case 0:
      colors[col][row-1] = 1;
      colors[col][row] = 2;
      colors[col][row+1] = 3;
      colors[col][row+2] = 4;
        break;
    case 1:
      colors[col+1][row] = 1;
      colors[col][row] = 2;
      colors[col-1][row] = 3;
      colors[col-2][row] = 4;
      break;
  }
}

/* Collision functions return true if a potential collision is detected */
bool Tetronimo_1::CheckCollisionRight() {
  switch (Tetronimo1.RotationCounter) {
      case 0:
          if(blocks[col+1][row] == 1 || blocks[col+1][row+1] == 1
          || blocks[col+1][row+2] == 1
          || blocks[col+1][row+3] == 1) {
            return true;
          }
          return false;
          break;
      case 1:
          if(blocks[col+2][row] == 1){
                return true;
          }
          return false;
          break;
    }
}

bool Tetronimo_1::CheckCollisionLeft() {
  switch (Tetronimo1.RotationCounter) {
    case 0:
      if(blocks[col-1][row] == 1 || blocks[col-1][row+1] == 1
      || blocks[col-1][row+2] == 1
      || blocks[col-1][row+3] == 1) {
        return true;
      }
      return false;
      break;
    case 1:
      if(blocks[col-3][row] == 1) {
        return true;
      }
      return false;
      break;
  }
}

// Fill blocks and colors
// Used when a tetronimo 'drops' on board
void Tetronimo_1::FillArrays() {
  this->FillBlocks();
  this->FillColors();
}

bool Tetronimo_1::LandingCriteria(){
  switch(Tetronimo1.RotationCounter) {
    case 0:
      if (row >= 18 || blocks[col][row+3] == 1) {
        return true;
      }
      break;
    case 1:
      if (row >= 20 || blocks[col-2][row+1] == 1 || blocks[col-1][row+1] == 1
      || blocks[col][row+1] == 1 || blocks[col+1][row+1] == 1) {
        return true;
      }
      break;
  }
  return false;
}

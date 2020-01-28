#include "../include/common.h"

void Tetronimo_3::RenderTetronimo() {
  glPushMatrix();
  switch (Tetronimo3.RotationCounter) {
    case 0:
      glTranslatef(-1*unit, unit, 0.0f);
      Util.DrawSquare(RED);
      glTranslatef(unit, 0.0f , 0.0f);
      Util.DrawSquare(YELLOW);
      glTranslatef(0.0f, -1*unit, 0.0f);
      Util.DrawSquare(PURPLE);
      glTranslatef(unit, 0.0f, 0.0f);
      Util.DrawSquare(ORANGE);
      break;
    case 1:
      glTranslatef(unit, unit, 0.0f);
      Util.DrawSquare(RED);
      glTranslatef(0.0f, -1*unit , 0.0f);
      Util.DrawSquare(YELLOW);
      glTranslatef(-1*unit, 0.0f, 0.0f);
      Util.DrawSquare(PURPLE);
      glTranslatef(0.0f, -1*unit, 0.0f);
      Util.DrawSquare(ORANGE);
      break;
  }
  glPopMatrix();
}

bool Tetronimo_3::InWindowLeft(){
  switch (Tetronimo3.RotationCounter) {
    case 0:
      return col >= 3;
      break;
    case 1:
      return col >= 2;
      break;
    }
}

bool Tetronimo_3::InWindowRight() {
  switch (Tetronimo3.RotationCounter) {
    case 0:
      return col <= 8;
      break;
    case 1:
      return col <= 8;
      break;
    }
}

void Tetronimo_3::FillBlocks(){
  switch (Tetronimo3.RotationCounter) {
    case 0:
      blocks[col-1][row] = 1;
      blocks[col][row] = 1;
      blocks[col][row-1] = 1;
      blocks[col+1][row-1] = 1;
      break;
    case 1:
      blocks[col+1][row] = 1;
      blocks[col+1][row-1] = 1;
      blocks[col][row-1] = 1;
      blocks[col][row-2] = 1;
      break;
  }
}

void Tetronimo_3::FillColors(){
  switch (Tetronimo3.RotationCounter) {
    case 0:
      colors[col+1][row-1] = ORANGE;
      colors[col][row-1] = PURPLE;
      colors[col][row] = YELLOW;
      colors[col-1][row] = RED;
      break;
    case 1:
      colors[col][row-2] = ORANGE;
      colors[col][row-1] = PURPLE;
      colors[col+1][row-1] = YELLOW;
      colors[col+1][row] = RED;
      break;
  }
}

/* Collision functions return true if a potential collision is detected */
// note that pivot coordinates are blocks[col][row]
bool Tetronimo_3::CheckCollisionRight() {
  switch (Tetronimo3.RotationCounter){
    case 0:
      if(blocks[col+2][row] == 1 || blocks[col+1][row+1] == 1) {
        return true;
      }
      break;
    case 1:
      if(blocks[col+1][row-1] == 1 || blocks[col+2][row] == 1
      || blocks[col+2][row+1] == 1){
        return true;
      }
      break;
  }
  return false;
}

// note that pivot coordinates are blocks[col][row]
bool Tetronimo_3::CheckCollisionLeft() {
  switch (Tetronimo3.RotationCounter) {
    case 0:
      if(blocks[col-2][row+1] == 1 || blocks[col-1][row] == 1){
        return true;
      }
      break;
    case 1:
      if(blocks[col-1][row-1] == 1 || blocks[col-1][row] == 1
      || blocks[col][row+1] == 1){
        return true;
      }
      break;
  }
  return false;
}

// Fill blocks and colors
// Used when a tetronimo 'drops' on board
void Tetronimo_3::FillArrays() {
  this->FillBlocks();
  this->FillColors();
}

// if any condition for stacking is detected, returns true
bool Tetronimo_3::StackingCriteria(){
  switch(Tetronimo3.RotationCounter){
    case 0:
      if (row >= 20 || blocks[col-1][row+1] == 1 || blocks[col][row+1] == 1
      || blocks[col+1][row] == 1) {
        return true;
      }
      break;
    case 1:
      if (row >= 20 || blocks[col][row] == 1 || blocks[col+1][row+1] == 1) {
        return true;
      }
      break;
    }
      return false;
}

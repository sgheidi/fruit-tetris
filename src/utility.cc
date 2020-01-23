#include "../include/utility.h"
#include "../include/common.h"

void Utility::GoDown() {
  y += unit;
  row ++;
}

void Utility::AccelerateDown() {
  y += unit;
  row ++;
}

void Utility::GoRight() {
  x += unit;
  col ++;
}

void Utility::GoLeft() {
  x -= unit;
  col --;
}

// color mapping function
// outputs color from color number
void Utility::FindColor(int color) {

  // 0/default: black
  // 1: green
  // 2: red
  // 3: orange
  // 4: purple
  // 5: yellow

  switch(color) {
    case BLACK:
      glColor3f(0.0f, 0.0f, 0.0f);
      break;
    case GREEN:
      glColor3f(0.0f, 1.0f, 0.0f);
      break;
    case RED:
      glColor3f(1.0f, 0.0f, 0.0f);
      break;
    case ORANGE:
      glColor3f(1.0f, 0.5f, 0.0f);
      break;
    case PURPLE:
      glColor3f(1.0f, 0.5f, 1.5f);
      break;
    case YELLOW:
      glColor3f(1.0f, 1.0f, 0.0f);
      break;
    default:
      glColor3f(0.0f, 0.0f, 0.0f);
  }
}

void Utility::DrawSquare(int color) {
  this->FindColor(color);
  glBegin(GL_POLYGON);

  glVertex2f(x, y);
  glVertex2f(x, y+unit);
  glVertex2f(x+unit, y+unit);
  glVertex2f(x+unit, y);

  glEnd();
}

/* Helper functions */
void Utility::PrintFilledBlocks() {
  for(int x=1;x<=10;x++){
    for(int y=1;y<=20;y++){
      if(blocks[x][y] == 1){
          cout << "blocks[" << x << "][" << y << "] is full"<<endl;
      }
    }
  }
}

void Utility::PrintCurrentPosition() {
  cout << "Row " << row << "  Col " << col << endl;
}

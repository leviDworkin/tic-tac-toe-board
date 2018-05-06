#pragma once
#include <iostream>
using namespace std;

class Coordinate{
  private:
    int x,y;
  public:
    Coordinate(int newX, int newY);
    int getX()const;
    int getY()const;
};

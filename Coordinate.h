#pragma once
#include <iostream>
using namespace std;

class Coordinate{
  private:
    int x,y;
  public:
    Coordinate(int newX, int newY);
    Coordinate(const Coordinate& other);
    int getX()const;
    int getY()const;
};

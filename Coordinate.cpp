#include "Coordinate.h"

Coordinate::Coordinate(int newX, int newY): x(newX),y(newY) {}
int Coordinate::getX()const{
  return x;
}
int Coordinate::getY()const{
  return y;
}

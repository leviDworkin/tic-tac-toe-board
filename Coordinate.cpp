#include "Coordinate.h"

Coordinate::Coordinate(int newX, int newY): x(newX),y(newY) {}
Coordinate::Coordinate(const Coordinate& other){
  x = other.x;
  y = other.y;
}
int Coordinate::getX()const{
  return x;
}
int Coordinate::getY()const{
  return y;
}

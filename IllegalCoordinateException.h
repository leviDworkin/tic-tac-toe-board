#pragma once
#include<string>
#include<iostream>
using namespace std;

class IllegalCoordinateException{
  private:
    int x,y;
  public:
    IllegalCoordinateException(int xVal, int yVal) : x(xVal),y(yVal){}
    string theCoordinate() const;
};

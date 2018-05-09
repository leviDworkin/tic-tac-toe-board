#pragma once
#include <iostream>
using namespace std;
#include"IllegalCoordinateException.h"
#include "IllegalCharException.h"
#include "Slot.h"
#include "Coordinate.h"
#include<string>

class Board{
  private:
    Slot** arr;
    int size;
  public:
    //Constructor and Destructor
    Board(int newSize);
    Board(const Board& other);
    ~Board();
    //Methods
    friend std::ostream& operator<< (std::ostream& o, Board const& b);
    Slot& operator[](const Coordinate& c);
    Board& operator=(const char c);
    Board& operator=(const Board& other);
};

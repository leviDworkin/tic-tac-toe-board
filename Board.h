#pragma once
#include <iostream>
using namespace std;
#include "Slot.h"
#include<vector>
#include<string>

class Board{
  private:
    Slot** arr = NULL;
    int size;
  public:
    //Constructor and Destructor
    Board(int newSize);
    Board(const Board& other);
    ~Board();
    //Methods
    friend std::ostream& operator<< (std::ostream& o, Board const& b);
    Slot& operator[](const vector<int>& v);
    Board& operator=(const char c);
    Board& operator=(const Board& other);
};

#pragma once
#include<iostream>
using namespace std;

class Slot{
  private:
    char c;
  public:
    Slot(char newC);
    Slot(const Slot& other);
    Slot();
    // ~Slot();
    friend std::ostream& operator<< (std::ostream& o, Slot const& slot);
    Slot& insert(char newC);
    Slot& operator=(char newC);
    Slot& operator=(const Slot& other);
    char getChar()const;
};

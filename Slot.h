#pragma once
#include<iostream>
using namespace std;
#include "IllegalCharException.h"

class Slot{
  private:
    char c;
  public:
    Slot(char newC);
    Slot(const Slot& other);
    Slot();
    friend ostream& operator<< (std::ostream& o, Slot const& slot);
    Slot& insert(char newC);
    Slot& operator=(char newC);
    Slot& operator=(const Slot& other);
    bool operator==(char other)const;
    char getChar()const;
};

#include "Slot.h"

Slot::Slot(char newC):c(newC){}
Slot::Slot(const Slot& other):c(other.c){}
Slot::Slot():c('.'){}
// Slot::~Slot(){}
std::ostream& operator<< (std::ostream& o, Slot const& slot){
  return o << slot.c;
}
Slot& Slot::insert(char newC){
  if(newC!='X' && newC!='O' && newC!='.')
    throw IllegalCharException(newC);
  c = newC;
  return *this;
}
Slot& Slot::operator=(char newC){
  if(newC!='X' && newC!='O' && newC!='.')
    throw IllegalCharException(newC);
  c = newC;
  return *this;
}
Slot& Slot::operator=(const Slot& other){
  c = other.c;
  return *this;
}
char Slot::getChar()const{
  return c;
}

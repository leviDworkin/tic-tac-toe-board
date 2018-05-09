#include "Slot.h"

Slot::Slot(char newC):c(newC){}
Slot::Slot(const Slot& other):c(other.c){}
Slot::Slot():c('.'){}

ostream& operator<< (ostream& o, Slot const& slot){
  o << slot.c;
  return o;
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
bool Slot::operator==(char other)const{
  if(c==other)
    return true;
  return false;
}
char Slot::getChar()const{
  return c;
}

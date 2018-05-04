#include "Board.h"
#include"IllegalCoordinateException.h"
#include "IllegalCharException.h"

//Constructor and Destructor
Board::Board(int newSize){
  // cout<<"is it null?: "<<**arr<<endl;
  size = newSize;
  arr = new Slot*[size];
  for(int i=0; i<size; i++){
    arr[i] = new Slot[size];
  }
}
Board::Board(const Board& other){
  size = other.size;
  if(arr!=NULL){
    for (int i = 0; i < size; i++) {
      delete arr[i];
    }
    delete arr;
  }
  arr = new Slot*[size];
  for(int i = 0 ; i < size ; i++){
      arr[i] = new Slot[size];
      for (int j = 0; j < size; j++) {
        arr[i][j].insert(other.arr[i][j].getChar());
      }
  }
}
Board::~Board(){
  for (int i = 0; i < size; i++) {
    delete arr[i];
  }
  delete arr;
}
//operator overloads
std::ostream& operator<< (std::ostream& o, Board const& b){
  string ans = "";
  for(int i=0;i<b.size;i++){
    for(int j=0;j<b.size;j++){
      ans = ans+b.arr[i][j].getChar();
    }
    ans = ans+"\n";
  }
  return o << ans;
}
Slot& Board::operator[](const vector<int>& v){
  if(v[0]>=size || v[1]>=size || v[0]<0 || v[1]<0)
    throw IllegalCoordinateException(v[0],v[1]);
  return arr[v[0]][v[1]];
}
Board& Board::operator=(const char c){
  if(c!='X' && c!='O' && c!='.')
    throw IllegalCharException(c);
  for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
      arr[i][j].insert(c);
    }
  }
  return *this;
}
Board& Board::operator=(const Board& other){
  size = other.size;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      arr[i][j] = other.arr[i][j];
    }
  }
  return *this;
}

CXX = clang++-5.0
CXXFLAGS = -std=c++17
a.out: main.o Board.o Slot.o
	$(CXX) $(CXXFLAGS) main.o Board.o Slot.o -o a.out
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp
Board.o: Board.cpp Board.h
	$(CXX) $(CXXFLAGS) -c Board.cpp
Slot.o: Slot.cpp Slot.h
	$(CXX) $(CXXFLAGS) -c Slot.cpp
clean:
	rm *.o a.out

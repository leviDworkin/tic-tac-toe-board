
a.out: main.o Board.o IllegalCharException.o IllegalCoordinateException.o Slot.o
	clang++-5.0 -std=c++17 main.o Board.o IllegalCoordinateException.o IllegalCharException.o Slot.o -o a.out
main.o: main.cpp
	clang++-5.0 -std=c++17 -c main.cpp
Board.o: Board.cpp Board.h
	clang++-5.0 -std=c++17 -c Board.cpp
Slot.o: Slot.cpp Slot.h
	clang++-5.0 -std=c++17 -c Slot.cpp
IllegalCharException.o: IllegalCharException.cpp IllegalCharException.h
	clang++-5.0 -std=c++17 -c IllegalCharException.cpp
IllegalCoordinateException.o: IllegalCoordinateException.cpp IllegalCoordinateException.h
	clang++-5.0 -std=c++17 -c IllegalCoordinateException.cpp
clean:
	rm *.o a.out


EXE:=exe
$(EXE) : main.cpp list.cpp
	g++ -std=c++11 -g -ggdb $^  -pedantic -o $@

list.cpp : list.hpp

clean:
	rm $(EXE)

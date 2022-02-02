
EXE:=exe
$(EXE) : main.cpp array.cpp
	g++ $^ -o $@

array.cpp : array.hpp

clean:
	rm $(EXE)

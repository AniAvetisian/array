CC=g++
PROGRAM = exe
SRC= string.cpp
SRC_O=string.o
MAIN=main.cpp
SRC_H= string.hpp
.PHONY: clean


$(PROGRAM): $(MAIN) libstatic.a
	$(CC) $< -L ./ -o $@ -lstdc++ -lstatic 


libstatic.a :$(SRC_O)
	ar rcs $@ $^


$(SRC_O): $(SRC) $(SRC_H)
	$(CC) $< -c -o $@






clean:
	rm $(PROGRAM) $(SRC_O) libstatic.a

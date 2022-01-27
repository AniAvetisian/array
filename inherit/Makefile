OBJ_DIR = obj/shape
SOURCES = $(wildcard src/shape/*.cpp)
OBJS = $(patsubst src/shape/%.cpp,$(OBJ_DIR)/%.o,$(SOURCES))
HEADERS = $(wildcard inc/shape/*.h)
STATIC_PROGRAM = bin/static.out
DYNAMIC_PROGRAM = bin/dynamic.out
INC_PATH = inc/shape
LIB_DIR = lib
CC = g++
MAIN = src/main/main.cpp
BIN_DIR = bin


$(STATIC_PROGRAM) : $(MAIN) $(LIB_DIR)/libstatic_shape.a
	$(CC) $(MAIN) -L $(LIB_DIR) -I $(INC_PATH) -o $(STATIC_PROGRAM) -lstdc++ -lstatic_shape

$(DYNAMIC_PROGRAM): $(MAIN) $(LIB_DIR)/libdynamic_shape.so
	$(CC) $(MAIN) -L $(LIB_DIR) -I $(INC_PATH) -o $(DYNAMIC_PROGRAM) -lstdc++ -ldynamic_shape

$(LIB_DIR)/libstatic_shape.a : $(OBJ_DIR)/shape.o $(OBJ_DIR)/rectangle.o $(OBJ_DIR)/circle.o $(OBJ_DIR)/triangle.o
	ar rcs $@ $^

$(LIB_DIR)/libdynamic_shape.so : $(OBJ_DIR)/shapedyn.o $(OBJ_DIR)/rectangledyn.o $(OBJ_DIR)/circledyn.o $(OBJ_DIR)/triangledyn.o
	$(CC) -shared $^ -o $@

$(OBJ_DIR)/%.o : src/shape/%.cpp $(DYNAMIC_PROGRAM)
	$(CC) $< -I $(INC_PATH) -c -o $@

$(OBJ_DIR)/%dyn.o : src/shape/%.cpp
	$(CC) -fPIC $^ -c -I $(INC_PATH) -o $@

.PHONY: clean
clean :
	rm -rf $(OBJ_DIR)/*
	rm -rf $(LIB_DIR)/*
	rm -rf $(BIN_DIR)/* 


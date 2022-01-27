#include "shape.h"

//defult constructor
Shape::Shape() {
	x=0;
	y=0;
}

// constructor
Shape::Shape(int new_x, int new_y) {
   x=new_x;
	y=new_y;
}


//destructor
Shape::~Shape(){}

// accessors for x & y
int Shape::get_X() { 
	return x; 
}

int Shape::get_Y() { 
	return y; 
}

void Shape::set_X(int new_x) { 
	x = new_x; 
}

void Shape::set_Y(int new_y) { 
	y = new_y; 
}

// move the shape position
void Shape::moveTo(int new_x, int new_y) {
   set_X(new_x);
   set_Y(new_y);
}

void Shape::rMoveTo(int deltax, int deltay) {
   moveTo(get_X() + deltax, get_Y() + deltay);
}

// abstract area
int Shape::area() {
	return 1;
}

// abstract operator ==
bool Shape::operator==(const Shape& obj) {
	return false;
}

//abstract operator =
Shape& Shape::operator=(const Shape& obj) {
	return *this;
}





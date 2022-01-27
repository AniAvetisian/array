#include "shape.h"
#include "rectangle.h"
#include <iostream>

//default constructor
Rectangle::Rectangle() {
	width=0;
	height=0;
}

// constructor
Rectangle::Rectangle(int new_x, int new_y, int new_width, int new_height): Shape(new_x, new_y) {
   set_Width(new_width);
   set_Height(new_height);
}

//destructor
Rectangle::~Rectangle() {}


// accessors for width and height
int Rectangle::get_Width() { 
	return width; 
}

int Rectangle::get_Height() { 
	return height; 
}

void Rectangle::set_Width(int new_width) { 
	width = new_width; 
}

void Rectangle::set_Height(int new_height) { 
	height = new_height; 
}

// area rectangle
int Rectangle::area() {
	return  height * width;
}

//operator ==
bool Rectangle::operator==(const Rectangle& obj) {
	if (x==obj.x && y==obj.y && height==obj.height && width==obj.width){
		return true;
	}
	return false;
}

//operator =
Rectangle& Rectangle::operator=(const Rectangle& obj) {
	x = obj.x;
	y = obj.y;
	height = obj.height;
	width = obj.width;
	return *this;
}


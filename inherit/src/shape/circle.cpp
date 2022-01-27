#include "shape.h"
#include "circle.h"
#include <iostream>
#include <cmath>

//default constructor
Circle::Circle() {
	radius=0;
}

// constructor
Circle::Circle(int new_x, int new_y, int new_radius): Shape(new_x, new_y){
   set_Radius(new_radius);
}

//destructor
Circle::~Circle() {}

 
// accessors for the radius
int Circle::get_Radius(){ 
	return radius; 
}

void Circle::set_Radius(int new_radius) { 
	radius = new_radius; 
}

// area circle
int Circle::area() {
	return pow(radius,2) * M_PI;
}

//operator ==
bool Circle::operator==(const Circle& obj) {
	if(x==obj.x && y==obj.y && radius==obj.radius) {
		return true;
	}
	return false;
}

//opertor =
Circle& Circle::operator=(const Circle& obj) {
	x=obj.x;
	y=obj.y;
	radius=obj.radius;
	return *this;
}





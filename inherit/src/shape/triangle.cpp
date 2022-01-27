#include "shape.h"
#include "triangle.h"

//default constructor
Triangle::Triangle() {
    width=0;
    height=0;
}

// constructor
Triangle::Triangle(int new_x, int new_y, int new_width, int new_height): Shape(new_x, new_y) {
   set_Width(new_width);
   set_Height(new_height);
}

//destructor
Triangle::~Triangle() {}


// accessors for width and height
int Triangle::get_Width() {
    return width;
}

int Triangle::get_Height() {
    return height;
}

void Triangle::set_Width(int new_width) {
    width = new_width;
}

void Triangle::set_Height(int new_height) {
    height = new_height;
}

// area rectangle
int Triangle::area() {
    return  ((height * width)/2);
}

//operator ==
bool Triangle::operator==(const Triangle& obj) {
    if (x==obj.x && y==obj.y && height==obj.height && width==obj.width){
        return true;
    }
    return false;
}

//operator =
Triangle& Triangle::operator=(const Triangle& obj) {
    x = obj.x;
    y = obj.y;
    height = obj.height;
    width = obj.width;
    return *this;
}


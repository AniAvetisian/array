#include <iostream>
#include "point_operator.hpp"

Position::Position()
{
    x=0;
	y=0;
}

Position::Position(int x_1,int y_1)
{
    x=x_1;
	y=y_1;
}

Position::~Position()
{
}

void Position::set_x(int x_1)
{
	x=x_1;
}

int Position::get_x()
{
	return x;
}

void Position::set_y(int y_1)
{
	y=y_1;
}

int Position::get_y()
{
	return y;
}

void Position::set_all(int x_1,int y_1)
{
	x=x_1;
	y=y_1;
}



const Position Position::operator + (Position pos) const
{
    Position new_pos;
    new_pos.x = x + pos.x;
    new_pos.y = y + pos.y;
    return new_pos;
}

const bool Position::operator == (Position pos) const
{
    if (x == pos.x  && y == pos.y){
	    return true;
    }
    return false;
}

const bool Position::operator != (Position pos) const
{
	if (x != pos.x || y != pos.y){
		return true;
    }
    return false;   
}








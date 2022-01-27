#include <iostream>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"

int main() {
	std::cout <<"Shape-------------------"<<std::endl;
	//Shape
	Shape S(4,4);
	std::cout <<"Constructor Shape:X " << S.get_X()<<", Y " << S.get_Y() <<std::endl;
	std::cout <<"Rectangle-------------------"<<std::endl;
	//Rectangle
	Rectangle R(4,4,5,6);
	std::cout <<"Area rectangle: " << R.area() <<std::endl;
	Rectangle D(4,4,5,6);
	bool y=(R==D);
	std::cout <<"Operator ==: " << y <<std::endl;
	Rectangle c=(R=D);
	std::cout <<"New obj X: " << D.get_X() <<", Y: "<< D.get_Y()<<", height: "<<D.get_Height()<<", width: "<<D.get_Width() <<std::endl;
	D.moveTo(11,22);
	std::cout <<"MoveTo new obj X: " << D.get_X() <<", Y: "<< D.get_Y()<<", height: "<<D.get_Height()<<", width: "<<D.get_Width() <<std::endl;
	D.rMoveTo(44,55);
std::cout <<"rMoveTo new obj X: " << D.get_X() <<", Y: "<< D.get_Y()<<", height: "<<D.get_Height()<<", width: "<<D.get_Width() <<std::endl;
	std::cout <<"Circle-------------------"<<std::endl;
	//Circle
	Circle C(3,3,3);	
	std::cout <<"Area circle: " << C.area() <<std::endl;
	Circle C2(3,3,3);
	bool p=(C==C2);
	std::cout <<"Operator ==: " << p <<std::endl;
	Circle d=(C=C2);
	std::cout <<"New obj X: " << C2.get_X() <<", Y: "<< C2.get_Y()<<", radius: "<<C2.get_Radius()<<std::endl;
	C2.moveTo(6,7);
	std::cout <<"MoveTo new obj X: " << C2.get_X() <<", Y: "<< C2.get_Y()<<", radius: "<<C2.get_Radius()<<std::endl;
	C2.rMoveTo(10,10);
	std::cout <<"rMoveTo new obj X: " << C2.get_X() <<", Y: "<< C2.get_Y()<<", radius: "<<C2.get_Radius()<<std::endl;
	std::cout <<"Triangle-------------------"<<std::endl;

	 //Triangle
    Triangle T(4,4,5,6);
    std::cout <<"Area triangle: " << T.area() <<std::endl;
    Triangle K(4,4,5,6);
    bool t=(T==K);
    std::cout <<"Operator ==: " << t <<std::endl;
    T=K;
    std::cout <<"New obj X: " << K.get_X() <<", Y: "<< K.get_Y()<<", height: "<<K.get_Height()<<", width: "<<K.get_Width() <<std::endl;
    K.moveTo(11,22);
    std::cout <<"MoveTo new obj X: " << K.get_X() <<", Y: "<< K.get_Y()<<", height: "<<K.get_Height()<<", width: "<<K.get_Width() <<std::endl;
    K.rMoveTo(44,55);
std::cout <<"rMoveTo new obj X: " << K.get_X() <<", Y: "<< K.get_Y()<<", height: "<<K.get_Height()<<", width: "<<K.get_Width() <<std::endl;

}


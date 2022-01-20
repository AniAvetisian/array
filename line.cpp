#include <iostream>
#include "point.cpp"
#include <cmath>

class line {

public:
	void set_points(point a1,point b1);
	int length_line();

public:
	line();
	line(point my_obj,point my_obj2);
	line(const line& b);
	const line& operator=(const line& c);
	~line();

private:
	point A;
	point B;

};

line::line(){
	std::cout << "Default constructor" << std::endl;
}

line::line(point my_obj, point my_obj2)
{	std::cout<<"Constructor"<<std::endl;
	A=my_obj;
	B=my_obj2;
}

line::line(const line& b){
	std::cout<<"Copy constructor"<<std::endl;
	A=b.A;
}

const line& line::operator=(const line& c)
{
	if (this ==&c) {
		return *this;
	}
	std::cout<<"Assigment Operator"<<std::endl;
	A=c.A;
	return *this;
}

line::~line()
{
	std::cout<<"Destructor"<<std::endl;
}

void line::set_points(point my_obj, point my_obj2){
	A = my_obj;
	B = my_obj2;
}

int line::length_line()
{
	int l_line = (sqrt(( pow(A.get_x() - B.get_x(),2)) + (pow(A.get_y() - B.get_y(),2))));
	return l_line;
}


int main () {
	point my_obj;
    my_obj.set_all(1,1);
    point my_obj1(my_obj);
    point my_obj2(2,2);
    //my_obj2.set_all(2,2);
    my_obj2=my_obj;
	point my_obj3(6,6);
    std::cout<<my_obj.length_point()<<std::endl;
    
    std::cout<<my_obj1.length_point()<<std::endl;
    
    std::cout<<my_obj2.length_point()<<std::endl;
	line line_obj;
	line_obj.set_points(my_obj,my_obj2);
	line line_obj1;
	line line_obj3(my_obj,my_obj1);
	line line_obj2(line_obj);
	line_obj1=line_obj3;
	
    std::cout<<line_obj3.length_line()<<std::endl;
    return 0;
}

#include <iostream>
#include <cassert>
#include <cmath>
class point 
{
public:
	int length_point();
	void set_x(int x_cord);
	void set_y(int y_cord);
	int get_x();
	int get_y();
	void set_all(int x_cord, int y_cord);

public:
	point();
	point(int x_cord, int y_cord);
	point(const point& b);
	const point& operator=(const point& c);
	~point();

private:
	int x_1;
	int y_1;
};

point::point()
{
	std::cout <<"Default const" << std::endl;
	int x=0;
	int y=0;
}

point::point(int x_cord, int y_cord)
{
	std::cout <<"Constructor"<<std::endl;
	x_1=x_cord;
	y_1=y_cord;
}

point::point(const point& b)
{
	std::cout <<"Copy Const" << std::endl;
	x_1=b.x_1;
	y_1=b.y_1;
}

const point& point::operator=(const point& c)
{
	if (this == &c) {
		return *this;
	}
	std::cout <<"Assigment Operator" << std::endl;
	x_1=c.x_1;
	y_1=c.y_1;

	return *this;
}

point::~point()
{
	std::cout<<"Destructor"<<std::endl;
}

void point::set_x(int x_cord)
{
	x_1=x_cord;
}

void point::set_y(int y_cord)
{
	y_1=y_cord;
}

int point::get_x()
{
	return x_1;
}

int point::get_y()
{
	return y_1;
}

void point::set_all(int x_cord, int y_cord)
{
	x_1=x_cord;
	y_1=y_cord;
}

int point::length_point()
{

	int a=(sqrt((pow(x_1,2))+(pow(y_1,2))));
	return a;
}	

/*int main() 
{
	point my_obj;
	my_obj.set_all(1,1);
	point my_obj1(my_obj);
	point my_obj2(2,2);
	//my_obj2.set_all(2,2);
	my_obj2=my_obj;
	std::cout<<my_obj.length_point()<<std::endl;
	
	std::cout<<my_obj1.length_point()<<std::endl;
	
	std::cout<<my_obj2.length_point()<<std::endl;
	return 0;
}*/
	
























	

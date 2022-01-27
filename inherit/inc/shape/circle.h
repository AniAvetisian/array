#ifndef CIRCLE_H
#define CIRCLE_H

class Circle: public Shape {

private:
   int radius;

public:
	Circle();
   Circle(int new_x, int new_y, int new_radius);
	~Circle();
   int get_Radius();
   void set_Radius(int new_radius);
	int area();
   bool operator==(const Circle& obj);
   Circle& operator=(const Circle& obj);

};

#endif

#ifndef SHAPE_H
#define SHAPE_H

class Shape {

public:
   int x;
   int y;

public:
	Shape ();
   Shape(int new_x, int new_y);
	~Shape();
   int get_X();
   int get_Y();
   void set_X(int new_x);
   void set_Y(int new_y);
   void moveTo(int new_x, int new_y);
   void rMoveTo(int deltax, int deltay);
   virtual int area();
   bool operator==(const Shape& obj);
   virtual Shape& operator=(const Shape& obj);

};

#endif

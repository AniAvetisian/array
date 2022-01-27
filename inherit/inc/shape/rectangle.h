#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle: public Shape {

private:
   int width;
   int height;


public:
	Rectangle();	
   Rectangle(int new_x, int new_y, int new_width, int new_height);
	~Rectangle();
   int get_Width();
   int get_Height();
   void set_Width(int new_width);
   void set_Height(int new_height);
   int area();
	bool operator==(const Rectangle& obj);
	Rectangle& operator=(const Rectangle& obj);
	

};

#endif

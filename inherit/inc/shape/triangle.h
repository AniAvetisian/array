#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle: public Shape {

private:
   int width;
   int height;


public:
    Triangle();
    Triangle(int new_x, int new_y, int new_width, int new_height);
    ~Triangle();
    int get_Width();
    int get_Height();
    void set_Width(int new_width);
    void set_Height(int new_height);
    int area();
    bool operator==(const Triangle& obj);
    Triangle& operator=(const Triangle& obj);


};

#endif

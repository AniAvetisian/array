#include <iostream>
#include "point_operator.cpp"


int main()
{   
    Position pos1(10,20);
    Position pos2(10,20);
    std::cout <<"pos1.x = " << pos1.get_x() << " pos1.y = " << pos1.get_y() <<std::endl;
    std::cout <<"pos2.x = " << pos2.get_x() << " pos2.y = " << pos2.get_y() <<std::endl;
    Position pos3 = pos1 + pos2;
    std::cout << "Sum = " << pos3.get_x() << " + " << pos3.get_y() << " = " << pos3.get_x() + pos3.get_y() << std::endl;
    if (pos1 == pos2)
    {   
        std::cout << "pos1 equal pos2" << std::endl;
    }
	pos1.set_x(30);   
    if (pos1 != pos2)
    {   
        std::cout << "pos1 not equal pos2!!!" << std::endl;
    }   
    return 0;
}


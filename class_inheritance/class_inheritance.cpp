#include <iostream>

class shape {
	public:
		int s_long;
		int s_hight;
	public:
		shape() {
			s_long=0;
			s_hight=0;
		}
		shape(int new_long, int new_hight) {
			s_long=new_long;
			s_hight=new_hight;
		}
		~shape() {}		
	public:
		void set_l(int l_long) {
			s_long=l_long;
		}
		void set_h(int h_hight) {
			s_hight=h_hight;
		}
		int get_s() {
			return s_hight;
		}
		int get_l() {
			return s_long;
		}
		int area() {
		return 1;
		};
		int moveto(int m_value) {
		return 1;
		}; 
		bool operator==(const shape& obj) {
		return true;
		};
		int operator=(const shape& obj) {
		return 1;
		};
};

class rectangle:public shape {
	public:
		int l_long;
		int x_cord;
		int y_cord;
	public:
		rectangle(): shape() {};
		rectangle (int x_n_cord,int y_n_cord,int l_n_long): shape () {
			x_cord=x_n_cord;
			y_cord=y_n_cord;
			l_long=l_n_long;
		}
		~rectangle() {}
		
	public:
		int area()  {
			int s=l_long*l_long;
			return s;
		}
        	int moveto(int m_value) {
			x_cord+=m_value;
			y_cord+=m_value;
			return x_cord, y_cord;
		}
        	bool operator==(const rectangle& obj) {
			if (l_long==obj.l_long && x_cord==obj.x_cord && y_cord==obj.y_cord) {
				return true;
			}
			return false;
		}
        virtual int operator=(const rectangle& obj) {
			l_long=obj.l_long;
			x_cord=obj.x_cord;
			y_cord=obj.y_cord;
		return obj.l_long, obj.x_cord,obj.y_cord;
		}

};
			
int main () {
	//shape constructor
	shape S(4,4);
	std::cout << S.get_l() << std::endl;
	//rectangle constructor, area
	rectangle r_obj (2,3,4);
	std::cout << r_obj.area() << std::endl;
	//rectangle operator ==
	rectangle u_obj (2,5,4);
	r_obj==u_obj;
	bool y=(r_obj==u_obj);
	std::cout << y << std::endl;
	
	return 0;

}		

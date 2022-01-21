#ifndef POINT_OPERATOR
#define POINT_OPERATOR
class Position
{
	public:
		const bool operator == (Position pos) const;
		const bool operator != (Position pos) const;
		const Position operator + (Position pos) const;
		void set_x(int x_1);
		void set_y(int y_1);
		int get_x();
		int get_y();
		void set_all(int x_1,int y_1);
    private:
        int x; 
        int y; 
	
	public:
		Position();
    	Position(int x_1,int y_1);
		~Position();	
};


#endif

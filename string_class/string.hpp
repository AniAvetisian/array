#ifndef STRING
#define STRING

class my_string 
{
	public:
		std::string str;
	public:
		my_string();
		my_string(std::string my_str);
		my_string(my_string& b);
	 	~my_string();
			
	public:
		int get_size();
		std::string append(std::string new_str);
		bool operator==(my_string& obj);
		std::string operator=(const my_string& obj);
		std::string operator+(const my_string& obj);
		bool operator<(const my_string& obj);
		std::string operator+=(const my_string& obj);
<<<<<<< HEAD
		char operator[](int index);
		std::string swap(my_string& obj);
		int find_first_of(my_string& obj);
=======
		std::char operator[](const int& index);
		/*std::string swap(std::string& new_string);*/
>>>>>>> 1eed2dc1ac7d6913864b1e449e8a5cffe53f038e
};

#endif	

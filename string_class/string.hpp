#ifndef STRING
#define STRING
class my_string 
{
	public:
		std::string str;
	public:
		my_string();
		my_string(std::string my_str);
	 	~my_string();
			
	public:
		int get_size();
		std::string append(std::string new_str);
		bool operator==(my_string& obj);
		std::string operator=(const my_string& obj);
		std::string operator+(const my_string& obj);
		bool operator<(const my_string& obj);
		std::string operator+=(const my_string& obj);
		std::char operator[](const int& index);
		/*std::string swap(std::string& new_string);*/
};
#endif	

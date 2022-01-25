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
		void append(std::string new_str);
		bool operator=(const std::string& m_str);
		void operator+(const std::string& m_str);
		void operator<(const std::string& m_str);
		//void operator+=(const std::string& m_str);
		void operator[](const int& index);
		//void swap(std::string m_str);
};
#endif	

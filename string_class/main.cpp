#include <iostream>
#include "string.cpp"

int main() {
	my_string s("hel");
	std::cout << s.get_size() <<std::endl;
	my_string d("hello world");
	bool y=(s=("hello world"));
	std::cout << y<<std::endl;
	s+("Naxadasutyun");
	s<("e");
	s[2];
	return 0;

}

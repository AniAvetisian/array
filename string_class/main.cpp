#include <iostream>
#include "string.cpp"

int main() {
	my_string s("hello world");
	std::string new_append=s.append("Good");
	std::cout << new_append <<std::endl;
	my_string a("hi student");
	bool y=(s==a);
	std::cout << y <<std::endl;
	std::string h=(a=s);
	std::cout << h <<std::endl;
	std::string e=(s+(a));
	std::cout << e <<std::endl;
	bool k=(s<a);
	std::cout << k <<std::endl;
	std::string p=(s+=(a));
	std::cout << p <<std::endl;
	/*std::cout << y<<std::endl;
	s+("Naxadasutyun");
	s<("e");
	s[2];*/
	return 0;

}

#include <iostream>
#include "string.cpp"

int main() {
<<<<<<< HEAD
	my_string S("Hello world ");
	//Copy constructor
	my_string c(S);
	std::cout << c.str<< std::endl;	
	
	//Append
	my_string append_obj("Hi I am a ");
	std::string new_append = append_obj.append(" student");
	std::cout << new_append << std::endl;
	
	// ==
	my_string A(" I am a student");
	bool y = (S == A);
	std::cout << y << std::endl;

	// =
	std::string h = (A = S);
	std::cout << h<< std::endl;

	// +
	std::string e = (S + A);
	std::cout << e << std::endl;

	// <
	bool k = (S < A);
	std::cout << k << std::endl;

	// +=
	std::string p = (S += A);
	std::cout << p << std::endl;

	// []	
	my_string H("Google");
	std::cout << H[2] << std::endl;

	// Swap
	my_string SW("First object string");
	my_string N_SW ("Second object string");
	SW.swap(N_SW);
	std::cout << SW.str << std::endl;
	std::cout << N_SW.str << std::endl;

	// Find first of
	my_string find_obj("This is a pen");
	my_string find_word("is");
	std::cout << find_obj.find_first_of(find_word) << std::endl;

=======
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
>>>>>>> 1eed2dc1ac7d6913864b1e449e8a5cffe53f038e
	return 0;

}

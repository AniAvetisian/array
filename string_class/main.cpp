#include <iostream>
#include "string.cpp"

int main() {
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

	return 0;

}

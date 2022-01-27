#include <iostream>
#include "string.cpp"

int main() {
	my_string S("Hello world ");
	//Copy constructor
	my_string c(S);
	std::cout <<"Copy constructor 'C' = "<< c.get_str()<< std::endl;	
	
	//Append
	my_string K ("Hi I am a student");
	my_string new_append = S.append(K);
	std::cout <<"Append function 'S' append 'K' = "<< new_append.get_str()<< std::endl;
	
	// ==
	my_string A(" I am a student");
	bool y = (S == A);
	std::cout <<"operator == 'S==A' = "<< y << std::endl;

	// =
	my_string h = (A = S);
	std::cout <<"operator = 'A=S'= "<< h.get_str()<< std::endl;

	// +
	my_string e = (S + A);
	std::cout <<"operator = 'S+A'"<< e.get_str() << std::endl;

	// <
	bool k = (S < A);
	std::cout <<"operator < 'S < A'"<< k << std::endl;

	// +=
	my_string p = (S += A);
	std::cout <<"operator += 'S+=A'"<< p.get_str() << std::endl;

	// []	
	my_string H("Google");
	std::cout <<"operator [] H[] = " << H[2] << std::endl;

	// Swap
	my_string SW("First object string");
	std::cout << "First obj SW string: "<< SW.get_str() << std::endl;
	my_string N_SW ("Second object string");
	std::cout <<"Second obj N_SW string: " << N_SW.get_str() << std::endl;
	SW.swap(N_SW);
	std::cout << "First obj SW string: "<< SW.get_str() << std::endl;
	std::cout <<"Second obj N_SW string: " << N_SW.get_str() << std::endl;

	// Find first of
	my_string find_obj("This is a pen");
	my_string find_word("is");
	std::cout <<"Find find_word in find_obj: " << find_obj.find_first_of(find_word) << std::endl;

	return 0;

}

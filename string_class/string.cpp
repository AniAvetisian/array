#include <iostream>
#include "string.hpp"

my_string::my_string() {
	str="";
}

my_string::my_string(std::string my_str) {
	str=my_str;
}

my_string::~my_string() {
}

int my_string::get_size() {
	return str.length();
}

std::string my_string::append(std::string new_str) {
	str.append(new_str);
	return str;
}



bool my_string::operator==(my_string& obj){
	if (str.length()!=obj.get_size()){
		return false;
	}
	for (int i=0;i<str.length();i++){
		if (str[i]==obj.str[i]) {
			continue;
		}else {
			return false;
		}
	}
	return true;
	
}

std::string my_string::operator=(const my_string& obj) {
	str=obj.str;
	return str;
}




std::string my_string::operator+(const my_string& obj) {

	return str+obj.str;
}
bool my_string::operator<(const my_string& obj) {

	for (int i=0;i<str.length();i++){
		if (str[i]==obj.str[i]) {
			continue;
		} else  {
			if(str[i]<obj.str[i]) {
				return true;
			}
			}
	}
	return false;
}

std::string my_string::operator+=(const my_string& obj) {
	
	return str+obj.str;
}









/*void my_string::operator[](const int& index) {

	std::cout <<str[index] <<std::endl;
}*/





		



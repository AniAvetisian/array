#include <iostream>
#include "string.hpp"

// Default Constructor
my_string::my_string() {
	str = "";
}

// Constructor with one argument
my_string::my_string(std::string my_str) {
	str = my_str;
}

// Copy Constructor
my_string::my_string(my_string& b){
	str = b.str;
}

// Destructor
my_string::~my_string() {
}

//Get string
std::string my_string::get_str() {
	return str;
}

// Get Size function
int my_string::get_size() {
	return str.length();
}

// Append function
my_string& my_string::append(my_string& obj) {
	str.append(obj.str);
	
	return *this;
}

// Operator ==
bool my_string::operator==(my_string& obj){
	if (str.length() != obj.get_size()){
		return false;
	}
	for (int i = 0;i < str.length();i++){
		if (str[i] == obj.str[i]) {
			continue;
		}else {
			return false;
		}
	}
	return true;
	
}

// Operator =
my_string& my_string::operator=(const my_string& obj) {
	str = obj.str;
	return *this;
}

// Operator +
my_string& my_string::operator+(const my_string& obj) {

	str + obj.str;
	return *this;
}

// Operator <
bool my_string::operator<(const my_string& obj) {

	for (int i = 0;i < str.length();i++){
		if (str[i] == obj.str[i]) {
			continue;
		} else  {
			if(str[i] < obj.str[i]) {
				return true;
			}
		}
	}
	return false;
}

// Operator +=
my_string& my_string::operator+=(const my_string& obj) {

	str + obj.str;
	return *this;
}

// Operator []
char my_string::operator[](int index) {
	return str[index];
}

// Swap
my_string& my_string::swap(my_string& obj){
	std::string new_value = str;
	str=obj.str;
	obj.str=new_value;
	return *this;
}

// Find first of
int my_string::find_first_of(my_string& obj){
	return str.find(obj.str);
}

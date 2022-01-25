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

// Get Size function
int my_string::get_size() {
	return str.length();
}

<<<<<<< HEAD
// Append function
=======
>>>>>>> 1eed2dc1ac7d6913864b1e449e8a5cffe53f038e
std::string my_string::append(std::string new_str) {
	str.append(new_str);
	return str;
}

<<<<<<< HEAD
// Operator ==
bool my_string::operator==(my_string& obj){
	if (str.length() != obj.get_size()){
		return false;
	}
	for (int i = 0;i < str.length();i++){
		if (str[i] == obj.str[i]) {
=======


bool my_string::operator==(my_string& obj){
	if (str.length()!=obj.get_size()){
		return false;
	}
	for (int i=0;i<str.length();i++){
		if (str[i]==obj.str[i]) {
>>>>>>> 1eed2dc1ac7d6913864b1e449e8a5cffe53f038e
			continue;
		}else {
			return false;
		}
	}
	return true;
	
}

<<<<<<< HEAD
// Operator =
std::string my_string::operator=(const my_string& obj) {
	str = obj.str;
	return str;
}

// Operator +
std::string my_string::operator+(const my_string& obj) {

	return str + obj.str;
}
=======
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
>>>>>>> 1eed2dc1ac7d6913864b1e449e8a5cffe53f038e

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
std::string my_string::operator+=(const my_string& obj) {
	return str + obj.str;
}

// Operator []
char my_string::operator[](int index) {
	return str[index];
}

// Swap
std::string my_string::swap(my_string& obj){
	std::string new_value = str;
	str=obj.str;
	obj.str=new_value;
	return str, obj.str;
}

// Find first of
int my_string::find_first_of(my_string& obj){
	return str.find(obj.str);
}

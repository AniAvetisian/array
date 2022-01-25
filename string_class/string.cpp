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

void my_string::append(std::string new_str) {
	str.append(new_str);
	std::cout << str <<std::endl;
}

bool my_string::operator=(const std::string& m_str){
	if (str.length()!=m_str.length()){
		return false;
	}
	for (int i=0;i<str.length();i++){
		if (str[i]==m_str[i]) {
			continue;
		}else {
			return false;
		}
	}
	return true;
	
}

void my_string::operator+(const std::string& m_str) {

	std::cout<<str+m_str<<std::endl;
}
void my_string::operator<(const std::string& m_str) {
	int count=0;
	for (int i=0;i<str.length();i++){
		count+=str[i];
	}
	int count1=0;
	for (int j=0;j<m_str.length();j++) {
		count1+=m_str[j];
	}
	if (count<count1) {

	std::cout <<"Firs string < second string "<<std::endl;
	}
	std::cout <<"Firs string > second string "<< std::endl;
	if (count == count1) {
	std::cout << "Firs string = second string "<< std::endl;
	}
}
		
void my_string::operator[](const int& index) {

	std::cout <<str[index] <<std::endl;
}





		



#include <iostream>
using namespace std; 

int count(string str);

int main() { 
	std::string str;
	std::getline(std::cin, str);

	cout <<"length: "<< count(str) << endl;
	return 0;
}

int count(string str) {
	basic_string <char>::size_type size, length;

	length = str.length();
	return length;
}



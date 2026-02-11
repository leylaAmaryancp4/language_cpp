#include <iostream>
#include <cstring>
int main(){
	
const char size = 40;//task 9
	char str1[size];
	char str2[size];
	std::cout <<"Enter your first string "<<std::endl;
	std::cin.getline(str1,size);
	
	std::cout <<"Enter your second string "<< std::endl;
	std::cin.getline( str2, size);
	strcat(str1,str2);
	std::cout << "Your string is  " << str1 << std::endl;
}

#include <iostream>// concat two string and found length
#include<string>

int main(){
	std::string str("Hello std::string");
	std::cout << str << std::endl;

	std::cout << "Enter text " << std::endl;

	std::string first;
	getline(std::cin, first);

	std::cout << "Enter another " << std::endl;

	std::string second;
	getline(std::cin, second);

	std::cout << "Result of concatenation is " << std::endl;
	std::string concat = first + " " + second;
	std::cout << concat << std::endl;

	std::cout << "lengt is " << concat.length() << std::endl;
}


		


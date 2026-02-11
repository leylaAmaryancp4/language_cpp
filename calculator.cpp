#include <iostream>
int main(){
	int num1;
	int num2;
	std::cout << "Pleas enter 2 numbers "<<std::endl;
	std::cin >> num1;
	std::cin >> num2;
	int sub = num1 - num2;
	std::cout << "The sub is " << sub << std::endl;
	int mul = num1 * num2;
	std::cout << "the mul is "<< mul<< std::endl;
	int  div = num1 % num2;
	std::cout << "The div is " << div << std::endl;
	int sum = num1 + num2;
	std::cout << "the sum is " << sum << std::endl; 


}

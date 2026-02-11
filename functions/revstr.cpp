#include <iostream>
#include <string>
//Write a function reverseString that takes a character array (string) as a parameter and reverses it. Call this function in main and print the reversed string.//task6
void revers(std::string& str){
	int start = 0;
	int end = str. length() -1;
	while(start < end){
		
		std::swap(str[start],str[end]);
	start++;
	end--;
	}

}
int main(){
	std::string str = "Hello , world";
	revers(str);
	std::cout << "Reverse string is " << str;
}


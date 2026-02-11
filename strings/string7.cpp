#include <iostream>
#include <cstring>
int main(){
	//Գրել ծրագիր, որում արժեքավորված են երկու տողեր։ Անհրաժեշտ է առաջին տողի մեջ պատճենել երկրորդ տողի պարունակությունը և տպել էկրանին։
	const int size = 100;
	 char ch1[size] = "Hello";
	const char* ch2 = "world";
	
	strcpy(ch1, ch2);
	std::cout << ch1;
}

#include <iostream>
//Requirements: Write a function factorial that takes an integer as a parameter and returns its factorial. Call this function in main and print the result.//task4
/*int fact(int n){
	if (n > 1){
		return n * fact(n-1);
	}else{
		return 1;
	}
}
int main(){
	int num;
	std::cout << "print a number "<<std::endl;
	std::cin >> num;
	std::cout << fact(num);
}*/
//Write a function stringLength that takes a character array (string) as a parameter and returns its length. Call this function in main and print the result.//task5
int  str(char* arr){
	int length = 0;
	while(*arr != '\0'){
	
	length++;
	arr++;
}

	return length;
}
int main(){
	const int size = 30;
	char arr[size];
	std::cout <<"Print string "<<std::endl;
	std::cin >> arr;
	std::cout << str(arr
	);
}

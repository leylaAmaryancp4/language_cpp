#include <iostream>
int main(){
	//Գրել ծրագիր, որը թույլ կտա օգտագործողին մուտքագրել տող և կտպի էկրանին մուտքագրված տողի երկարությունը։
	int size = 30;
	char arr[size];
	std::cout <<"Print the string "<<std::endl;
	std::cin.getline(arr,size);
	char*ptr = arr;
	int length = 0;
	while(*ptr != '\0'){
		ptr++;
		length++;
	}
	std::cout <<"Strin length is "<< length << std::endl;
}

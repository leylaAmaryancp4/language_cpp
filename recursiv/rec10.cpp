#include <iostream>
//Իրականացնել ռեկուրսիվ ֆունկցիա, որը կստանա տող և կվերադարձնի տողի երկարությունը։
int len(char* str){
	if(*str == '\0'){
		return 0;
}
return 1 + len(str + 1); 

}

int main(){
	char st[] = "Hello";
	std::cout <<len(st) << std::endl;
}

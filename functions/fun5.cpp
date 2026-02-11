#include <iostream>
//Իրականացնել ֆունկցիա, որը կստանա ամբոջ թվային արժեք և կվերադարձնի այդ թվի ամենամեծ թվանաշանի արժեքը։ Ֆունկցիայի վերադարձրած արդյունքը տպել էկրանին։

int foo(int num){
	int max_digit = 0;

	if(num < 0){ 
		num = -num;
	}
	
	while(num > 0){
	int digit = num % 10;
	if(digit > max_digit){
	max_digit = digit;
	}
	num /= 10;
		
	}
	return max_digit;
}

int main(){
	int  num;
	std::cout << "Print numbers " <<std::endl;
	std::cin >>num;

	 int larg_digit = foo(num);
	std::cout << "Greadest digit is " << larg_digit <<std::endl;

}

#include <iostream>
//Իրականացնել ռեկուրսիվ ֆունկցիա, որն ընդունում է թիվ և վերադարձնում նրա թվանշանների գումարը
int sum(int num){
	if(num == 0){
		return 0;
	} 
	return num % 10 + sum(num / 10);

}

int main(){
	int n = 12345;
	int sum_of_digit = sum(n);
	std::cout <<"Some of digit is " << sum_of_digit << std::endl;
}

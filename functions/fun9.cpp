#include <iostream>
//Իրականացնել ֆունկցիա, որն ընդունում է թիվ և վերադարձնում նրա թվանշանների գումարը:
int sum(int num){
	int sum = 0;
	while(num != 0){
		sum += num % 10;
		num /= 10;
	}
return sum;
}
int main(){
	int num ;
	std::cout <<"Print a number "<<std::endl;
	std::cin >> num;
	int result = sum(num);
	std::cout <<"The sum of digit is " << result<<std::endl;
}

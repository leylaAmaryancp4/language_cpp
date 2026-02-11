#include <iostream>
//Իրականացնել ֆունկցիա, որը ունի հետևյալ նախատիպը (prototype): Ֆունկցիան վերադարձնում է num ամբողջ թվի exp աստիճանի արժեքը։  int power (int num, int exp);


int power(int num, int exp){
	 int result = 1;
	 for(int i = 0; i < exp; ++i){
		 result *= num;
	 }
	 return result;
}
int main(){
	int num = 0;
	int exp = 0;
	std::cout << "Print number end power "<<std::endl;
	std::cin >> num;
	std::cin >> exp;
	int result = power(num ,exp);
	std::cout << num << " 's " <<  exp << " powers is "<<result <<std::endl;
}
//recursiv:
int pow(int num, int exp){
        exp == 0;{
                return 1;
        }else{
                return num * pow(num, exp - 1);
        }
}


#include <iostream>
//Իրականացնել ֆունկցիա, որը ստանում է ամբողջ թվային պարամետր և վերադարձնում է n-րդ Ֆիբոնաչիի թիվը։ 
/*int fib(int n){//fib1:
	if(n > 2)
	return n;
	return fib(n - 1) + fib(n - 2);
	
}
int main(){
	int num;
	std::cout <<"Enter a number "<<std::endl;
	std::cin >> num;
	std::cout << fib(num);
}*/

int fib (int fibIndex)//fin2:
{
	if (fibIndex < 2){
		return fibIndex;
	}else{ 
		return fib(fibIndex - 1) + fib(fibIndex -2);
	}
}
int main(){
	int index = 0;
	std::cin >> index;
	std::cout <<fib(index)<<std::endl; 
}

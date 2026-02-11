#include <iostream>
//Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թվային արժեք։ Մուտքագրված ամբողջ թվի համար իրականացնել ֆունկցիա, որը ստանում է int տիպի պարամետր և վերադարձնում է թվի թվանաշանների քանակը։
int foo(int n){
	 
       if(n == 0)return 1;
       int count = 0;
       if(n < 0) n = -n;
       while(n != 0){
	       n /= 10;
	       count++;
       }
       return count;

       
}
int main(){
	int a = 0;
	std::cout <<"Print integer "<<std::endl;
	std::cin >> a;
	
	int count = foo(a);
	std::cout <<"the count of digits is " << count << std::endl;
}

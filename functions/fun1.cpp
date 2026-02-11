#include <iostream>
bool foo(int n){
	if(n <= 1 ){
		return false;
	
	}
	for(int i = 2; i * i <= n; ++i){
	if ((n % 2) == 0){
	return false;
	}
	}
	
	return true;
	
}

int main(){
	int num  = 0;
	std::cout <<"Print the number"<<std::endl;
	std::cin >> num;
	if(foo(num)){
	std::cout<< num << " "  << "is prime number " <<std::endl;
	}else{
		std::cout <<  num << " " <<  " is not prime number "<<std::endl;
	}
}

#include <iostream>//erkuakan teski berel:
void  binary(int n){
	if(n == 0){
	return;
	}
	int binar[32];
	int index = 0;\
	
	while(n > 0){
	bninar[index] = n % 2;
	n /= 2;
	index++;
	}
	
	for(int i = index - 1; i >= 0; i--){
	std::cout <<binar[i];
	}
	
	}
	
	int main(){
	int n ;
	std::cout << "Print number "<<std::endl;
	std::cin >> n;
	binary(n);
	}

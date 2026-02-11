#include <iostream>
int fact(int num){//cheshavorvac factorial:
	static int arr[6] = {1,1,2};
	
	if(arr[num] !=0){
		std::cout << "Hello"<<std::endl;
		return arr[num];
	}
	arr[num] = num * fact(num - 1);
	return arr[num];
}
int main(){
	std::cout << fact(6) <<std::endl;
}

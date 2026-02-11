#include<iostream>
int fibo(int num){//cheshavorvac fibonachi:
	static int arr[6] = {0,1,1};
	if(num <= 2){
		return 1;
	}
	if(arr[num] != 0){
		return arr[num];
	}
	arr[num] = fibo(num - 1) + fibo(num - 2);
	return arr[num];
}

int main(){
	std::cout << fibo(6) << std::endl;
}

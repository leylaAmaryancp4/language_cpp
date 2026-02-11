#include <iostream>
//Իրականացնել ֆունկցիա, որը վերցնում է զանգվածը և դրա չափը և էկրանին տպում զանգվածի տարրերը:
void fun(int arr[], int size){
	for(int i = 0; i < size; ++i){
		std::cout << arr[i] << " "<<std::endl;
	}
	return;

}
int main(){
	const int size = 5;
	int arr[size] = {1,2,3,4,5};
	fun(arr, size);
	
}

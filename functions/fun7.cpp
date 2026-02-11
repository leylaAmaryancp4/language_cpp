#include <iostream>
//Գրեք ֆունկցիա, որը վերցնում է զանգվածը և դրա չափը և տպում զանգվածի տարրերը հակառակ հերթականությամբ:
void ptr(int arr[], size_t  size){
	for(int i = size - 1; i >=0 ; --i){
		std::cout << arr[i] <<" " << std::endl;
	}
		
		
}
int main(){
	const int size = 6;
	int arr[size] = {1,2,3,4,5,6};
	ptr(arr,size);
}

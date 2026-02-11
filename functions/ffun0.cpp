#include <iostream>/*//task1
void foo(int arr[], int size){
	for(int i = 0; i < size; ++i){
		std::cout << arr[i];
	}
		return;
}
int main(){
	const int size = 20;
	int arr[size] = {1,2,3,4,5};
	 foo(arr,size);
}

int sum(int num1, int num2){//task2
	 int res = num1 + num2;
	 return res;
}
int main(){
	int num1 = 0 ;
	int num2 = 0;
	std::cout << "Print two numbers "<<std::endl;
	std::cin >> num1;
	std::cin >> num2;
	int result = sum(num1,num2);
	std::cout << "the sum of two numbers is "<< result << std::endl;
	return 0;

}*/
int max(int x, int y){//task2
	
		    
		      return (x > y) ? x:y;
			    
		      
	
}
int main(){
	int a = 0;
	int b = 0;
	std::cout << "Enter two number "<< std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cout << max(a,b);

}

#include <iostream>
int main(){//Այս ծրագիրը պահանջում է օգտատիրոջից մուտքագրել թիվ, և եթե թիվը զույգ է ու դրական, տպում է 0-ից մինչև 100 թվերը, իսկ եթե թիվը կենտ է կամ ոչ դրական, տպում է 100-ից մինչև 1 թվերը հակառակ կարգով։
	//task1
	/*int n = 0;
	std::cout << "Print a number" <<std::endl;
	std::cin >> n;
	if(n > 0 && (n % 2 ==0)){
		for(int i = 0; i <= 100; ++ i){
			std::cout << i << std::endl;
		}
	}else{
		for(int i = 100; i > 0; --i){
			std::cout << i<< std::endl;
		}
	}
	//task2
	for(int i = 1 + 1; i <= 100; i += 2 ){
		
		std::cout << i << std::endl;
	}
	//task3
	for(int i = 0 + 1; i < 100; i += 2){
		std::cout << i << std::endl;
	}
	//task4Մուտքագրել երկու թիվ՝ num1 և num2։ Հաշվել [num1, num2] միջակայքի բոլոր զույգ թվերի քանակը։
	int num1 = 0;
	int num2 = 0;
	std::cout << "Enter two numbers" << std::endl;
	std::cin >> num1;
	std::cin >> num2;
	int count = 0;
	if(num1 % 2 == 0){
		for(int i = num1; i < num2; i += 2){
			++count;
			

		} std::cout <<"Event numbers are  " << count <<std::endl;
	}else if(num1 % 2 == 1){
		for(int i = num1 + 1; i < num2; i += 2){
			++count;
			 
		}
		std::cout << "Event numbers are " << count;
	}
	//task4,task5
	int arr[5] = {1,2,3,4,5};
	int sum = 0;
	for(int i = 0; i < 5; ++i){
		std::cout << arr[i] << std::endl;
		
		 sum +=arr[i];
	}

		 std::cout<<"the sum of elements is " << sum << std::endl;
		 //Իրականացնել ծրագիր, որը հաշվում է զույգ թվերի քանակը ամբողջ թվերի ստատիկ զանգվածում:
	const int size = 10;
	int arr[size] = {1,2,3,4,5,6,7,8,9,10};
	int count = 0;
	for (int i = 0; i < size; ++i){
		if(arr[i] % 2 ==0){
			++count;
		}
		
	}
		std::cout << "the count of even elements is " << count << std::endl;*/
		//Ստեղծեք ծրագիր, որը պատճենում է մեկ ստատիկ զանգվածի տարրերը մեկ այլ ստատիկ զանգվածի մեջ:
       int size = 5;
       int arr[size] = {1,2,3,4,5};
      int tmp[size];
     for(int i = 0; i < size; ++i){
	     std::cout << arr[i];
	     if(arr[size]  = tmp[size]){
		     for(int i = 0; i < size; ++i){
			    tmp [i]= arr[i];
		     }
		     
	     }
	     std::cout << tmp[i]<<std::endl;
     } 



	
}


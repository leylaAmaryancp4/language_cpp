int num#include<iostream>
//Իրականացնել ֆունկցիա, որը ստանում է թիվ և վերադարձնում է 1,եթե թիվը զույգ է։
//Տրված թվի երկուական համակարգի ներկայացման մեջ հաշվել 1-երի քանակը։



int count_of_ones(int num)
{
	int count = 0;
	while(num)
	{
		if (num & 1)
			count++;	
		num = num >> 1;
	}
}

int main(){
	int n ;
	std::cout << "Print a number "<<std::endl;
	std::cin >> n;
	int count = count_of_ones(n);
	std::cout <<" 1  number occurs " << count <<  " in binary " << std::endl;
}

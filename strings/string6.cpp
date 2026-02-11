#include <iostream>
int main(){
	//Գրել ծրագիր, որը մուտքագրում է տող և օգտագործելով ցուցիչ տպում է էկրանին տողի ամեն երկրորդ սիմվոլը։
	const int size = 30;
	char str[size];
	std::cout <<"Print the string "<<std::endl;
	std::cin.getline(str,size);
	char*p = str;
	while(*p != '\0'){
		if(*p + 2){
			std::cout << p<<std::endl;
		}
		p++;
	}
}

#include <iostream>
int main(){
	//Հայտարարել տող և տպել էկրանին տողում առկա հատուկ սիմվոլները։ Հատուկ սիմվոլներ են համարվում ոչ թվային և ոչ լատինատառ սիմվոլնորը։
const int size = 100;
char arr[size];
std::cout <<"print a string "<<std::endl;
std::cin >> arr;
for(int i = 0; arr[i] != '\0'; ++i){
	char ch = arr[i];{
		if(!((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))){
			std::cout << ch;
		}
	}
}
}


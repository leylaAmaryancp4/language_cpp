#include <iostream>
int main(){
	
	
	/*char str[10];//task1:

	std::cout <<"Print the strings size "<<std::endl;
	std::cin >>str;
	std::cout << str;
	
	
char arr[40] = {};//task2:
std::cout <<"Print string " << std::endl;
std::cin >> arr;
int length = 0;
char *str = arr;
while(*str != '\0'){
	std::cout << *str;
	str ++;
	length ++;
		}*/

	char arr [50];
	char ch ;
	char* str1 = arr;
	int flag = 0;
	std::cout <<"Print the text " << std::endl;
	std::cin >> arr;
	std::cin >>ch;
	

	while(*str1 != 0){
		if(*str1 == ch){
			flag = 1;
std::cout << str1;
	break;
		}
	str1++;
	}
	
	if(flag == 0){
	std::cout <<"symbol is not found " << std::endl;
	}



}

#include <iostream>
int main(){
	//Գրել ծրագիր, որը հայտարարված տողի մեջ հաշվում է բառերի քանակը։ Բառ է համարվում ցանկացած տառերի և թվերի կույտ, որը անջատված է այլ բառերից բացատի միջոցով։ Օրինակ՝ “I am a good student”, ծրագիրը կտպի 5։
	const int size = 100;
	char str[size];
	bool flag = 0;
	
	int count = 0;
	std::cout <<"print a string's "<<std::endl;
	std::cin.getline(str, size);
       char* ptr = str;
while(*ptr != '\0'){
	
	if((*ptr >= 'a' &&  *ptr <= 'z') ||(*ptr >= '0' && *ptr <= '9') ||(*ptr >= 'A' && *ptr <= 'Z'  /*&& *ptr == ' '*/)){
		if(!flag)
		{
			count++;
			flag = 1;
		}
	}else{
		flag = 0;
	}
ptr++;
}

		
std::cout <<"Count of the words is "<< count <<std::endl;
return 0;


}

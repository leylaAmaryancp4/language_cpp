#include <iostream>
int main(){
	//Գրել ծրագիր, որը մուտքագրում է տող և մեկ առանձին սիմվոլ։ Հաշվել տողում այդ սիմվոլի քանակը և տպել էկրանին։ Եթե տողում նշված սիմվոլը առկա չէ, տպել համապատասխան հաղորդագրություն։
		const int size = 100;
	char ch[size];
	char sym;
	int count = 0;
	std::cout << "Print the string "<<std::endl;
	std::cin.getline(ch,size);
	std::cout <<"Print a symbol "<< std::endl;
	std::cin >> sym;


	char* ptr = ch;
	bool found = 0;
	while( *ptr != '\0' ){
		if(*ptr == sym){
			
			found = 1;
			
			count++;
		}
	
		ptr++;
		
		
		
	}
       if(found){
	       std::cout <<"the number of similar symbols is" << count <<std::endl;
       }else{
	std::cout << "Not symbol is found "<<std::endl;
	}

	
}

#include <iostream>
int main(){
	//Գրել ծրագիր, որը մուտքագրում է տող և մեկ առանձին սիմվոլ։ Էկրանին տպել տողը սկսած այդ սիմվոլից։
	const int size = 30;
	char str[size];
	char sym = 0;
	int flag = 0;
	std::cout << "Print the string "<< std::endl;
	std::cin >> str;
	std::cout << "Print the symbol "<<std::endl;
	std::cin >> sym;
	char* pt = str;
       while( *pt != '\0' ){
	       if(*pt == sym){
		       flag = 1;
	       std::cout << pt <<std::endl;
	       break;
	       }
	       pt++;
	      }
       if(flag == 0){
	std::cout <<"symbol is not found " << std::endl;
       }
      

}

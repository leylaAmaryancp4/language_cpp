#include <iostream>
int main(){
	//Գրել ծրագիր, որը թույլ կտա օգտագործողին մուտքագրել տող (character զանգված) և տպել էկրանին մուտքագրված տողը օգտագործելով ցուցիչ։
char str [30];
std::cout <<"Print a string "<<std::endl;
std::cin >> str;
char*ptr = str;
std::cout << ptr << std::endl;
}

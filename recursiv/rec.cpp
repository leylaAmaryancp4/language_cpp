#include<iostream>
//Գրել ռեկուրսիվ ֆունկցիա, որը ստանում է n բնական թիվ և տպում է 0-ից n թվերը։
void foo(int n){//0 - 10 tpel:
	if(n < 0)
		return ;
	foo(n - 1);
	std::cout << n << std::endl;

}
int main(){
	 foo(10) ;
}

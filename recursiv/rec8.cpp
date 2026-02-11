#include <iostream>

//Գրել ֆունկցիա, որը ստուգում է, արդյոք տրված տողը պալինդրոմ է ռեկուրսիվ եղանակով։
void palind(const char* str, size_t size, int start, int end ){
	if(start >= end){
		return true;
	}
	if(str[start] != str[end]){
		return false;
	}
	return palind(str, start + 1, end - 1)

}
int main(){
	const char* str = "madam";
	int length = std
}



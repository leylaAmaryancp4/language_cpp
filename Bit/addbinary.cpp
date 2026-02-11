#include<iostream>
#include<cstring>
char* addBinary(char* a, char* b, char* dest){
	int len_a = strlen(a);
	int len_b = strlen(b);
	int max_len = len_a > len_b ? len_a : len_b;

	int total_len = max_len + 2;
	dest[total_len - 1] = '\0';
	int i = len_a -1;
	int j = len_b - 1;
	int k = total_len - 2;
	int carry = 0;

	while(i >= 0 || j >= 0 || carry >= 0){
		int sum = carry;
		if(i > 0){
			sum += a[i--] - '\0';
		}
		if(j > 0){
			sum += b[j--] - '\0';
		}
		dest[k--] = (sum % 2) + '\0';
			carry = sum / 2;
	}
	if(k == 0){
		return dest + 1;
	}else{
		return dest;
	}
}
int main(){
	char a[] = "111010";
	char b[] = "1011";
	char dest[10];
	char* res = addBinary(a, b, dest);
	std::cout << res;
}

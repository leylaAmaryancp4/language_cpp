#include <iostream>
//Իրականացնել int տիպի արժեք վերադարձնող ֆունկցիա, որը վերադարձնում է՝ 1, եթե ֆունկցային փոխանցված ամբողջ թիվը կարող է արտահայտվել երկու պարզ թվերի գումարով, հակառակ դեպքում ֆունկցիան կվերադարձնի՝ 0:
int foo(int n){
        int sum = 0;
        for(int i = 2; i <= n / 2;++i)
                if(sum = n - i){
                        return 1;
                }
        return 0;

}
int main(){
        int num = 0;
        std::cin >> num;
        int res = foo(num);
if(res == 1){
        std::cout << "yes"<<std::endl;
}else{
        std::cout << "No "<<std::endl;
}
}


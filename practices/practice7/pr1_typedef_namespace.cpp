#include<iostream>
#include<cstdint>

namespace my_func {
    int atoi(const char* s) {
        return std::atoi(s) + 1;
    }
    namespace extra {
        int atoi(const char* s) {
            return std::atoi(s) + 10;
        }        
    }
}

int main() {

    typedef int size_t;
    typedef double ratio_t;
    using score_t = double;
    
    size_t arr_size = 100;
    ratio_t screen_ratio = 0.3;
    score_t my_score = 4.0;
    
    typedef int int_arr_t[2]; //[] 위치에 주의.
    int_arr_t arr[3] = {{1, 2}, {2, 3}, {3, 4}}; //3x2 배열.    

    int16_t int1 = 11; //int16_t를 ctrl+click하여 정의를 확인.
    int32_t int2 = 111;
    std::cout << "int16_t size: " << sizeof(int16_t) << std::endl;
    std::cout << "int32_t size: " << sizeof(int32_t) << std::endl;

    //Namespace
    int num = std::atoi("999") + 1;
    int num2 = my_func::atoi("999") + 1;
    std::cout << "num = " << num << std::endl;
    std::cout << "num2 = " << num2 << std::endl;

    int num3 = my_func::extra::atoi("999") + 1;
    namespace ext = my_func::extra;
    int num4 = ext::atoi("999") + 1;
    std::cout << "num3 = " << num3 << std::endl;
    std::cout << "num4 = " << num4 << std::endl;

    return 0;
}


#ifndef ABSTRACT_ARRAY_H_
#define ABSTRACT_ARRAY_H_
#include <iostream>

class AbstractArray {
    //클래스 선언에서 추가/수정이 필요한 부분이 있으면 적절히 수정하세요.
    public:        
        AbstractArray() {};        
        virtual int get(int index) = 0;
        virtual bool set(int index, int n) = 0;
        virtual int size() = 0;
};
#endif
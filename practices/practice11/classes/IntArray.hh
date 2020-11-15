#ifndef INTARRAY_H_
#define INTARRAY_H_
#include "AbstractArray.hh"

class IntArray : public AbstractArray {
    //클래스 선언에서 추가/수정이 필요한 부분이 있으면 적절히 수정하세요.
    //INIT_SIZE는 10으로 고정입니다.
    protected:
        static constexpr int INIT_SIZE = 10;
        int* elements;
        int arraySize;
    public:
        IntArray();
        int get(int index);
        bool set(int index, int n);
        int size();
        ~IntArray();
};
#endif


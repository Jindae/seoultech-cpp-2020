#ifndef INT_EXTENDABLE_ARRAY_H_
#define INT_EXTENDABLE_ARRAY_H_
#include "IntArray.hh"

class IntExtendableArray : public IntArray {
    //클래스 선언에서 추가/수정이 필요한 부분이 있으면 적절히 수정하세요.
    //INIT_SIZE는 10, MAX_SIZE는 100으로 고정입니다.
    private:
        static constexpr int MAX_SIZE = 100;
        bool extend(int capacity);
    public:
        IntExtendableArray();
        bool set(int index, int n);
        bool add(int n); 
};
#endif


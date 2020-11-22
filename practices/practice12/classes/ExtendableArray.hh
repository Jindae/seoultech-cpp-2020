#ifndef EXTENDABLE_ARRAY_H_
#define EXTENDABLE_ARRAY_H_
#include <algorithm>
#include "Array.hh"
/*
 * Array를 상속받은 ExtendableArray클래스를 
 * 클래스 템플릿으로 적절하게 변환하여 일반화하세요.
 * AbstractArray, Array는 이미 수정되었으므로 그대로 두면 됩니다.
 * 기본적인 멤버함수도 대부분 구현되어 있으므로 일반화를 하는 것에 중점을 두면 됩니다.
 * 
 * 예외는 extend() 멤버함수입니다.
 * 이 함수는 요구사항을 보고 코드를 수정하여 테스트를 통과하게 만드시면 됩니다.
 * 
 * 다른 멤버함수들도 extend()함수의 변화에 따라 필요하면 적절히 수정하세요.
 * 멤버 함수들은 11주차 예시답안에 비해 보다 깔끔하게 다듬어진 코드를 갖고 있습니다.
 * 차이를 비교하여 어떻게 해야 더 좋은 코드를 작성할 수 있는 것인지 확인해보세요.
 */

class ExtendableArray : public Array {
    private:
        static constexpr int MAX_SIZE = 50;
        bool extend();
    public:
        ExtendableArray();
        bool set(int index, int n);
        bool add(int n); 
        ~ExtendableArray();
};
#endif

ExtendableArray::ExtendableArray() { }

bool ExtendableArray::extend(int capacity) {
    /*
     * 다음을 만족하도록 함수를 수정합니다.
     * 
     * 더 이상 capacity를 입력받지 않고,
     * 무조건 현재 크기의 50%만큼 확장(1.5배가 되도록).
     * 늘어난 배열의 크기가 MAX_SIZE를 넘으면 
     * false를 반환하고 확장하지 않음.
     * 
     */    
    int newCapacity = this->arraySize + capacity;
    if(newCapacity > MAX_SIZE)
        return false;
    int* newArr = new int[newCapacity];
    /* 기존 내용복사를 위해 좀 더 세련되게 copy()함수를 사용했습니다.
     * 이 부분은 바꿀 필요없습니다.
     * 이에 대한 내용은 13~14주차 표준 템플릿 라이브러리에서 배웁니다.
     * 궁금한 경우 std::copy로 검색을 해보시면 됩니다.
     */
    std::copy(this->elements, this->elements+this->arraySize, newArr);
    delete[] this->elements;
    this->elements = newArr;
    this->arraySize = newCapacity;
    return true;
}

bool ExtendableArray::set(int index, int n) {
    /*
     * 이제 set함수는 인덱스를 보다 엄밀히 검사합니다.
     * 유효하지 않은 인덱스가 들어오면 false를 반환합니다.
     */
    if(index >= this->arraySize || index < 0) {
        return false;
    }        
    this->elements[index] = n;
    return true;
}

bool ExtendableArray::add(int n) {
    /*
     * 이제 add()는 배열을 확장하고 원소를 추가합니다.
     * 원소 추가는 set()을 이용하여 코드를 간단하게 합니다.
     */
    int index = this->arraySize;    
    if(!extend())
        return false;
    return set(index, n);
}

template<typename T>
ExtendableArray<T>::~ExtendableArray() {}
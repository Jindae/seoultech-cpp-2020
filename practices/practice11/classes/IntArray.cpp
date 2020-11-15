#include "IntArray.hh"

//제대로 정의되지 않은 부분이 있다면 추가하세요.

IntArray::IntArray() {
    this->elements = new int[INIT_SIZE];
    this->arraySize = INIT_SIZE;
}

int IntArray::get(int index) {
    return this->elements[index];
}

bool IntArray::set(int index, int n) {
    /*
     * index에 대한 검사를 추가합니다.
     * 만약 index가 현재 배열의 정상 인덱스 범위를 넘어서면,
     * 배열에 원소를 넣지 않고 false를 반환하도록 수정합니다.
     */
    this->elements[index] = n;
    return true;
}

int IntArray::size() {
    return this->arraySize;
}

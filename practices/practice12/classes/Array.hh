#ifndef ARRAY_H_
#define ARRAY_H_
#include "AbstractArray.hh"

template<typename T>
class Array : public AbstractArray<T> {
    protected:
        static constexpr int INIT_SIZE = 10;
        T* elements;
        int arraySize;
    public:
        Array();
        T get(int index);
        bool set(int index, T n);
        int size();
        ~Array();
};
#endif

template<typename T>
Array<T>::Array() {
    this->elements = new T[INIT_SIZE];
    this->arraySize = INIT_SIZE;
}

template<typename T>
T Array<T>::get(int index) {
    return this->elements[index];
}

template<typename T>
bool Array<T>::set(int index, T n) {
    if(index >= this->arraySize)
        return false;
    this->elements[index] = n;
    return true;
}

template<typename T>
int Array<T>::size() {
    return this->arraySize;
}

template<typename T>
Array<T>::~Array() {
    delete[] this->elements;
}
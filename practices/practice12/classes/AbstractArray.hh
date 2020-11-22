#ifndef ABSTRACT_ARRAY_H_
#define ABSTRACT_ARRAY_H_
#include <iostream>

template<typename T>
class AbstractArray {
    public:        
        AbstractArray() {};        
        virtual T get(int index) = 0;
        virtual bool set(int index, T n) = 0;
        virtual int size() = 0;
        virtual ~AbstractArray() {};
};
#endif


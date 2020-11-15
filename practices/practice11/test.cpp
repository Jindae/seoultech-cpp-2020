#include<iostream>
#include<vector>
#include<cmath>
#include<functional>
#include "classes/IntExtendableArray.hh"

const double EPS = 0.00001;
bool equals(double, double);

bool test1();
bool test2();
bool test3();

int main() {
    int passed = 0;
    std::vector<std::function<bool()>> tests = 
        { test1, test2, test3 };
    for(int i=0; i<tests.size(); i++) {
        std::function<bool()> test = tests[i];
        bool result = false;
        try {
            result = test();
        } catch (...) {
            result = false;
        }
        if(result)
            passed++;
        else
            std::cout << "test" << i+1 << " failed." << std::endl;
    }
    std::cout << passed << "/" << tests.size() << " tests passed. " << std::endl;
    return passed == tests.size() ? 0 : 1;
}

bool equals(double x, double y) {
    double delta = std::abs(x-y);
    return delta <= EPS;
}

bool test1() {
    bool result = true;
    AbstractArray* arr = new IntArray();
    result &= arr->size() == 10;
    for(int i=0; i<arr->size(); i++)
        arr->set(i, i+1);
    result &= arr->get(5) == 6;
    result &= arr->set(0, 100);
    result &= arr->get(0) == 100;
    result &= !arr->set(10, -1);    
    delete arr;

    return result;
}

bool test2() {
    bool result = true;
    AbstractArray* arr = new IntExtendableArray();
    result &= arr->size() == 10;
    for(int i=0; i<arr->size(); i++)
        arr->set(i, i+1);
    result &= arr->get(7) == 8;
    result &= arr->set(0, 100);
    result &= arr->get(0) == 100;
    result &= arr->set(10, 77);
    result &= arr->get(10) == 77;
    delete arr;

    return result;
}

bool test3() {
    bool result = true;
    IntExtendableArray* arr = new IntExtendableArray();
    result &= arr->size() == 10;
    result &= arr->add(11);
    result &= arr->size() == 20;
    result &= arr->get(10) == 11;
    result &= !arr->set(100, 10);    
    delete arr;

    return result;
}

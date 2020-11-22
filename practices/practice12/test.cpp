#include<iostream>
#include<vector>
#include<cmath>
#include<functional>
#include "classes/ExtendableArray.hh"

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
    AbstractArray<int>* arr = new Array<int>();
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
    AbstractArray<double>* arr = new Array<double>();
    result &= arr->size() == 10;
    for(int i=0; i<arr->size(); i++)
        arr->set(i, 1.5 * i);
    result &= equals(arr->get(2), 3.0);
    result &= equals(arr->get(5), 7.5);
    result &= arr->set(0, 7.77);
    result &= equals(arr->get(0), 7.77);
    result &= !arr->set(10, -1);
    delete arr;

    return result;
}

bool test3() {
    bool result = true;
    ExtendableArray<int>* arr = new ExtendableArray<int>();
    result &= arr->size() == 10;
    result &= arr->add(11);
    result &= arr->size() == 15;    
    result &= arr->get(10) == 11;
    result &= !arr->set(1000, 10);
    delete arr;

    return result;
}

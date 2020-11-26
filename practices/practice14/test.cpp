#include<iostream>
#include<vector>
#include<cmath>
#include<functional>
#include "classes/practice14.hh"
using namespace std::placeholders;

const double EPS = 0.00001;
bool equals(double, double);

bool test1();
bool test2();
bool test3();
bool test4();

int main() {
    int passed = 0;
    std::vector<std::function<bool()>> tests = 
        { test1, test2, test3, test4 };
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

auto gcd2 = std::bind(gcd(), _1, 2);

bool test1() {    
    bool result = true;
    std::vector<int> v = {1, 3, 5};
    std::vector<int> r = {1, 1, 1};
    transform(v.begin(), v.end(), v.begin(), gcd2);
    result &= v == r;
    return result;
}

bool test2() {
    bool result = true;
    std::vector<int> v = {2, 4, 6};
    std::vector<int> r = {2, 2, 2};
    transform(v.begin(), v.end(), v.begin(), gcd2);
    result &= v == r; 
    return result;
}

bool test3() {
    bool result = true;    
    std::vector<int> v1 = {1, 3, 5};
    std::vector<int> v2 = {2, 4, 6};
    std::vector<int> r = {1, 1, 1};
    get_gcd(v1, v2);
    result &= v1 == r;
    return result;
}

bool test4() {
    bool result = true;
    std::vector<int> v1 = {3, 2, 1};
    std::vector<int> v2 = {1, 3, 2, 5};
    std::vector<int> r = {1, 2, 3};
    get_gcd(v1, v2);
    result &= v1 == r;   
    return result;
}

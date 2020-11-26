#include<iostream>
#include<vector>
#include<cmath>
#include<functional>
#include "classes/palindrome.hh"

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

bool test1() {
    bool result = true;
    result &= is_palindrome("abba");
    result &= is_palindrome("abcba");
    result &= !is_palindrome("v(-_-)v");
    result &= !is_palindrome("v(-_- )v");
    result &= !is_palindrome("( -_-)b");
    return result;
}

bool test2() {
    bool result = true;
    result &= make_palindrome("ab") == "aba";
    result &= make_palindrome("abc") == "abcba";
    result &= make_palindrome("*T_") == "*T_T*";
    result &= make_palindrome("ab&*") != "ab&**&ba";
    return result;
}

bool test3() {
    bool result = true;
    std::vector<int> v = {1, 2, 3, 4};
    result &= !is_palindrome(v);
    v = {1, 3, 2, 3, 1};
    result &= is_palindrome(v);
    return result;
}

bool test4() {
    bool result = true;
    std::vector<int> v = {1, 2, 3};
    std::vector<int> t = {1, 2, 3, 2, 1};
    result &= make_palindrome(v) == t;
    v = {1, 3};
    t = {1, 3, 1};
    result &= make_palindrome(v) == t;
    v = {1, 0, -1};
    t = {1, 0, -1, -1, 0, 1};
    result &= make_palindrome(v) != t;
    return result;
}

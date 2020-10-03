#include<iostream>
using namespace std;

int increase(int x, int y) {
    x += y;
    return x;
}

void increase(int *a, int y) {
    a[0] += y;
}

void ref_increase(int &x, int y) {
    x += y;
    y = 10;
}

int main() {
    //Call by Value
    int x = 10;
    increase(x, 5); //x를 5만큼 증가.
    cout << "1. x = " << x << endl;
    x = increase(x, 5);
    cout << "2. x = " << x << endl;

    //Call by Address
    int a[1] = { x }; //a를 15로 초기화.
    increase(a, 5);
    cout << "3-1. a[0] = " << a[0] << endl;
    cout << "3-2. x = " << x << endl;

    //Call by Reference
    int y = 5;
    ref_increase(x, y);
    cout << "4-1. x = " << x << endl;
    cout << "4-2. y = " << y << endl;

    return 0;
}


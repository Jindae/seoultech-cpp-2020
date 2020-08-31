#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    
    int a = 5, b = 2, c = 0;
    double d = 0.0;

    //direct int division
    cout << 5 / 2 << endl;
    cout << a / b << endl;

    //int division: assign to int
    c = a / b;
    cout << c << endl;

    //int division: assign to double
    d = a / b;
    cout << d << endl;

    //mixed division: int / double
    d = a / d;
    cout << d << endl;

    d = 3 / 2;
    cout << d << endl;

    int y = 40000;
    short x = y + y;
    cout << x << endl;

    double i = 1.0000002;
    float j = i * 2.0;
    double k = i * 2.0;
    cout << fixed << setprecision(7) << j << endl;
    cout << k << endl;

    i = 5 / double(y);
    cout << i << endl;
    
    return 0;
}
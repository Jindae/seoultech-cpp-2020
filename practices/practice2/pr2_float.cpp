#include<iostream>
#include<cfloat>
#include<iomanip>
using namespace std;

int main() {
    cout << DBL_DIG << endl;
    cout << FLT_DIG << endl;
    cout << LDBL_DIG << endl;

    float a = 1.23E+20f; //1230....0
    float b = 1.23E+6f; //1,230,000
    float c = a + 1.0f;
    float d = b + 1.0f;

    cout << "c - a = " << c - a << endl;
    cout << "d - b = " << d - b << endl;

    float pi = 3.14159265359f;
    cout << fixed;
    cout << setprecision(6) << pi << endl;
    cout << setprecision(15) << pi << endl;

    double dbl_pi = 3.14159265359;
    cout << setprecision(6) << dbl_pi << endl;
    cout << setprecision(15) << dbl_pi << endl;
    
    double x = 0.3;
    double y = 0.1 + 0.1 + 0.1;
    bool eql = x == y;    
    cout << boolalpha << "x == y ? " << eql << endl;
    cout << setprecision(20);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    
    return 0;
}
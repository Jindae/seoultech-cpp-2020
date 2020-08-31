#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int a = 3; 
    double b = 3.141592;

    //increment
    cout << "Increment example" << endl;
    cout << "a = " << a << " b = " << b << endl;
    cout << "a = " << ++a << " b = " << ++b << endl; //Increased before used.
    cout << "a = " << a++ << " b = " << b++ << endl; //Not Increased yet.
    //Increased at this point.
    cout << "a = " << a << " b = " << b << endl;

    //decrement
    cout << endl << "Decrement example" << endl;
    cout << "a = " << a << " b = " << b << endl;
    cout << "a = " << --a << " b = " << --b << endl; //Decreased before used.
    cout << "a = " << a-- << " b = " << b-- << endl; //Not Decreased yet.
    //Decreased at this point.
    cout << "a = " << a << " b = " << b << endl;

    int c = 1;
    int d = --c + c++ + c-- + ++c;
    cout << "d = " << d << endl;
    
    return 0;
}
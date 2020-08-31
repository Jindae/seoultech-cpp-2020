#include<iostream>
using namespace std;

int main() {
    int a = 65;
    char x = a;
    bool y = a;

    cout << a << endl;
    cout << x << endl;
    cout << std::boolalpha; //boolalpha to print 'true/false'
    cout << y << endl; 
    cout << std::noboolalpha << y << endl; //switch off.

    //There are 26 letters + 6 special chracters in the middle.
    x = x + 32;
    cout << x << endl;
    
    return 0;
}

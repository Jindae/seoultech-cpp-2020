#include<iostream>
#include<iomanip>
#include<bitset>
#include<time.h>
using namespace std;

int main() {
    
    int a = 48, b = 37;
    int c = 0;
    c = a << 1;
    cout << "a = " << std::bitset<8>(a) << endl; //bitset<8> to print 8 bits.
    cout << "b = " << std::bitset<8>(b) << endl << endl; 

    //Bitwise NOT
    c = ~a;
    cout << " a = " << std::bitset<8>(a) << endl;
    cout << "~a = " << std::bitset<8>(c) << endl << endl; 

    //Bitwise AND / OR
    c = a & b;
    cout << "    a = " << std::bitset<8>(a) << endl;
    cout << "    b = " << std::bitset<8>(b) << endl;
    cout << "a & b = " << std::bitset<8>(c) << endl << endl; 
    c = a | b;
    cout << "    a = " << std::bitset<8>(a) << endl;
    cout << "    b = " << std::bitset<8>(b) << endl;
    cout << "a | b = " << std::bitset<8>(c) << endl << endl; 

    //Bitwise XOR
    c = a ^ b;
    cout << "    a = " << std::bitset<8>(a) << endl;
    cout << "    b = " << std::bitset<8>(b) << endl;
    cout << "a ^ b = " << std::bitset<8>(c) << endl << endl;

    //Shift Operators.
    cout << "     a = " << std::bitset<8>(a) << endl;
    cout << "a << 1 = " << std::bitset<8>(c) << endl;
    c = a >> 2;
    cout << "     a = " << std::bitset<8>(a) << endl;
    cout << "a >> 2 = " << std::bitset<8>(c) << endl << endl;

    //signed and unsigned.
    c = 1 << 31;
    unsigned int d = 1 << 31;
    cout << "  signed 1 << 31 = " << c << endl;
    cout << "  signed 1 << 31 = " << bitset<32>(c) << endl;
    cout << "unsigned 1 << 31 = " << d << endl;
    cout << "unsigned 1 << 31 = " << bitset<32>(d) << endl;

    //Performance comparison
    clock_t s_time = clock();
    int x = 1;
    for(int i=0; i<100000000; i++) {
        x = x << 1; // x * 2
        x = x >> 1; // x / 2
    }        
    clock_t e_time = clock();
    cout << fixed << setprecision(6);
    cout << "Bitwise Op exec. time = " << (double)(e_time-s_time)/CLOCKS_PER_SEC << "s" << endl;

    s_time = clock();
    x = 1;
    for(int i=0; i<100000000; i++) {
        x *= 2;
        x /= 2;
    }        
    e_time = clock();
    cout << "Arithmetic exec. time = " << (double)(e_time-s_time)/CLOCKS_PER_SEC << "s" << endl;

    return 0;
}
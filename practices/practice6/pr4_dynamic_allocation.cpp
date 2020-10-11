#include<iostream>
using namespace std;

int main() {

    int* ptr1 = new int;
    int* ptr2 = new int[10] (); //C++11부터 초기화 가능.
    int x = 5;
    int* ptr3 = &x;

    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "ptr1 = " << ptr1 << endl;
    cout << "ptr2 = " << ptr2 << endl;
    cout << "ptr3 = " << ptr3 << endl;

    delete ptr1;
    delete[] ptr2;

    cout << "ptr1 = " << ptr1 << endl; //delete후 포인터 확인.
    cout << "*ptr1 = " << *ptr1 << endl; //값을 다시 확인.

    //delete된 포인터의 역참조가 가능
    *ptr1 = 10;
    cout << "*ptr1 = " << *ptr1 << endl; //값을 다시 확인.

    //null pointer로 변경하여 역참조시 에러 발생하도록 함.
    ptr1 = nullptr;
    cout << "*ptr1 = " << *ptr1 << endl; //디버거에서 에러 확인.
    
    return 0;
}
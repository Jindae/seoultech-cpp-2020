#include<iostream>
using namespace std;

int main() {

    int s = 10;
    int t = 3;
    short u = 1;
    
    int* ptr = &s;
    int* ptr2 = &t;
    short* ptr3 = &u;

    cout << "s = " << s << endl;
    cout << "&s = " << &s << endl;  //변수 s가 가리키는 메모리의 주소 참조
    cout << "ptr = " << ptr << endl;    //포인터 변수 자체의 값
    cout << "*ptr = " << *ptr << endl;  //포인터 변수가 가리키는 메모리 안의 값
    
    cout << "ptr2 = " << ptr2 << endl;    //t는 s 바로 다음의 int변수 -> 주소값의 차이에 주목.
    cout << "ptr3 = " << ptr3 << endl;    //u는 t 바로 다음의 short변수 -> 주소값의 차이에 주목.

    //포인터가 가리키는 메모리에 있는 값을 변경.
    *ptr = 5;
    cout << "*ptr = " << *ptr << endl;
    cout << "s = " << s << endl;    //변수 s와 ptr이 가리키는 메모리는 동일.
       
    return 0;
}


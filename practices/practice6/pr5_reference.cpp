#include<iostream>
using namespace std;

void print(int (&arr)[5]) {
    cout << "Array:" << endl;
    //Ranged For 사용가능.
    for(int x : arr)
        cout << x << ", ";
}

int main() {

    int a = 5, b = 3;
    int& n = a;
    cout << "a = " << a << endl;
    cout << "n = " << n << endl;
    n = 10;
    cout << "a = " << a << endl;
    cout << "n = " << n << endl;
    n = b;
    cout << "a = " << a << endl;
    cout << "n = " << n << endl;

    //배열 출력.
    int arr[] = { 1, 2, 3, 4, 5 };
    print(arr);

    //상수를 가리키는 포인터.
    const int SIZE = 10;
    const int* ptr = &SIZE; //const가 반드시 필요.
    const int& ref = SIZE; //const가 반드시 필요.
    //이 부분은 허용되지 않음 - 주석을 해제하면 컴파일에러 표시됨.
    //*ptr = 1; 
    //ref = 1;

    //변수를 참조하면?
    const int* ptr2 = &a;
    const int& ref2 = a;
    //여전히 허용되지 않음.
    //*ptr = 2;
    //ref2 = 2;

    //상수 포인터(const pointer)
    int* const ptr3 = &a;
    *ptr3 = 10; //가리키는 변수를 바꾸는 것은 허용됨.
    cout << "a = " << a << endl;
    //포인터가 가리키는 주소는 변경 불가능.
    //ptr3 = ptr2;

    //메모리, 포인터 값 둘 모두 변경 불가능.
    const int* const ptr4 = &a;    
    // *ptr4 = 3;
    // ptr4 = ptr;

    return 0;
}
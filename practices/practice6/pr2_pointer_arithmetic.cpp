#include<iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 2;    
    int* ptr = &a;
    int* ptr2 = &b;

    int x = a / b;
    int y = *ptr / *ptr2;   //*연산자를 지우면 어떻게 될까요?

    //a, b변수로 계산한 x의 값과 포인터를 이용해 계산한 y값의 비교.
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    //두 포인터 변수의 주소값 확인
    cout << "ptr = " << ptr << endl;
    cout << "ptr2 = " << ptr2 << endl;

    //포인터 주소값에 1을 더하거나 빼는 경우.
    cout << "ptr2+1 = " << ptr2+1 << endl;
    cout << "ptr-1 = " << ptr-1 << endl;

    //포인터 주소값에 변수를 더하거나 뺌.
    int k = 1;
    cout << "ptr2+k = " << ptr2+k << endl;
    cout << "ptr-k = " << ptr-k << endl;

    return 0;
}


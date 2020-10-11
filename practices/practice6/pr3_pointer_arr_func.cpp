#include<iostream>
using namespace std;

void func(int* x) {
    *x = 5;
}

void func2(int (*x)[2], int size);

int main() {

    int a[3] = {1, 2, 3};
    int* x = a;

    //index를 이용한 참조 가능.
    cout << "a[1] = " << a[1] << endl;
    cout << "x[1] = " << x[1] << endl;

    //역참조 연산자*를 이용한 참조 가능.
    cout << "*(a+1) = " << *(a+1) << endl;
    cout << "*(x+1) = " << *(x+1) << endl;

    //index와 복합 사용.
    cout << "(a+1)[1] = " << (a+1)[1] << endl;
    cout << "(x+1)[1] = " << (x+1)[1] << endl;

    //2차원 배열
    int b[2][3] = {{1, 2, 3}, {4, 5, 6}};
    //int** y = b; //이 부분 주석을 해제하면 b를 대입하는 부분에서 에러가 발생.

    //func(1);  //매개변수가 포인터이므로 정수값을 넣으면 에러.
    int y = 1;
    func(&y);   //포인터형을 인자로 하기위해 &연산자 사용.
    cout << "y = " << y << endl;

    //2차원 배열 인자.
    int z[3][2] = {};
    func2(z, 3);
    cout << "z[1][2] = " << z[1][2] << endl;

    return 0;
}

void func2(int (*x)[2], int size) {
    x[1][2] = 2;
}

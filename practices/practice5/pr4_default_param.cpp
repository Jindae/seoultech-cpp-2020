#include<iostream>
using namespace std;

void print(int x, int y = 5, int z = 10);

//이 부분 주석을 해제하면 print(1, 2)에서 에러발생
// void print(int x, int y);

int main() {
    //y, z의 값을 명시적으로 주지 않아도 정상동작.
    cout << "Without z" << endl;
    print(1, 2);    //윗부분/아랫부분의 주석을 해제하면 에러발생.
    cout << "Without y" << endl;
    print(1);    
    return 0;
}

void print(int x, int y, int z) {
    cout << "x:" << x << endl;
    cout << "y:" << y << endl;
    cout << "z:" << z << endl;
}

/*
이 부분 주석을 해제하면 print(1, 2)에서 에러발생
void print(int x, int y) {
    cout << "x:" << x << endl;
    cout << "y:" << y << endl;
}
*/

#include<iostream>
using namespace std;

int main() {

    //인덱스 범위가 벗어나도 컴파일 됨.
    int a[3] = {};
    int b[5] = {}; 
    cout << "a[100] = " << a[100] << endl;
    
    //배열 인덱스를 벗어난 범위에 값을 변경하는 경우.
    int diff = b - a; //배열 a와 b의 주소차이를 저장. b[0]에 해당하는 a의 인덱스가 됨.
    a[diff] = 123; //값을 대입.
    cout << "a[diff] = " << a[diff] << endl; //메모리의 값이 바뀌게 됨.

    //실제로 변경된 값이 b[0]에 영향.
    for(int i=0; i<5; i++)
        cout << b[i] << ", ";

    return 0;
}
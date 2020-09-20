#include<iostream>
using namespace std;

int main() {

    //기본적인 배열 생성 및 초기화
    int arr[3]; //초기화가 없는 경우.
    cout << "arr[0] = " << arr[0] << endl;
    cout << "arr[1] = " << arr[1] << endl;
    cout << "arr[2] = " << arr[2] << endl;

    int new_arr[3] = {};   //모두 0으로 초기화.
    cout << "new_arr[0] = " << new_arr[0] << endl;
    cout << "new_arr[1] = " << new_arr[1] << endl;
    cout << "new_arr[2] = " << new_arr[2] << endl;

    double new_double_arr[3] = { 1.2e3, 0.023e2, 0.13 };    //값을 지정.
    cout << "new_double_arr[0] = " << new_double_arr[0] << endl;
    cout << "new_double_arr[1] = " << new_double_arr[1] << endl;
    cout << "new_double_arr[2] = " << new_double_arr[2] << endl;

    //초기화시 배열의 크기보다 초기값의 원소수가 작은 경우.
    int a[3] = { 1, 2 };
    cout << "a[0] = " << a[0] << endl;
    cout << "a[1] = " << a[1] << endl;
    cout << "a[2] = " << a[2] << endl;

    return 0;
}
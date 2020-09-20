#include<iostream>
using namespace std;

int main() {

    //실행시간에 배열 크기가 정해지는 경우
    int len;
    cout << "Input array size: ";
    cin >> len; //len에 배열의 크기를 입력 받음.
    int array[len*2]; //길이가 컴파일 시간에 정해지지 않으므로, { }로 초기화하면 에러.

    //또는 new 키워드 사용.
    int *a = new int[len];
    for(int i=0; i<len; i++)
        cout << i << " = " << a[i] << endl;
    delete[] a;
    
    //array를 0으로 초기화.
    for(int i=0; i<len; i++) {
        printf("before: array[%d] = %d\n", i, array[i]);
        array[i] = 0;        
    }

    for(int i=0; i<len; i++) {
        printf("after: array[%d] = %d\n", i, array[i]);
        array[i] = 0;        
    }

    //배열의 크기를 입력하지 않는 경우.
    int arr[] = { 1, 3, 2 };
    len = sizeof(arr) / sizeof(int);   //배열크기 구하기
    cout << "[" << arr[0] << ", " << arr[1] << ", " << arr[2] << "]\n";
    cout << "size of arr: " << len << endl;

    return 0;
}
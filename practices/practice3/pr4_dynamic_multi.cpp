#include<iostream>
#include<time.h>
using namespace std;

int main() {

    //고정 배열과 동적 배열 성능비교
    int size = 1000;
    int fixed_arr[1000] = {};
    int* dynamic_arr = new int[size];  //int*에 주의

    //write and read 1,000,000 times.
    int iter = 1000000;
    clock_t s_time = clock();
    for(int n=0; n<iter; n++) {
        for(int i=0; i<size; i++) {
            fixed_arr[i] = fixed_arr[i] + 1;
        }
    }    
    clock_t e_time = clock();
    cout << "Fixed 1,000,000 read and write: " << (double)(e_time-s_time)/CLOCKS_PER_SEC << "s" << endl;

    s_time = clock();
    for(int n=0; n<iter; n++) {
        for(int i=0; i<size; i++) {
            dynamic_arr[i] = dynamic_arr[i] + 1;
        }
    }    
    e_time = clock();
    cout << "Dynamic 1,000,000 read and write: " << (double)(e_time-s_time)/CLOCKS_PER_SEC << "s" << endl;

    //다차원 배열
    int array2d[3][2] = {
        {1, 2 },
        {2, 3 },
        {3, 4 }
    };

    //2차원 배열에서 i, j가 각각 행,열번호로 작용
    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++){
            cout << array2d[i][j] << ",";
        }
        cout << endl;
    }

    int arr2d_0[2][2] = {};   //모두 0으로 초기화
    int arr2d_1[2][2] = { {1, }, {2, }}; // {{1, 0}, {2, 0}}
    cout << "arr2d_0" << endl;
    for(int i=0; i<2; i++)
        cout << "{" << arr2d_0[i][0] << ", " << arr2d_0[i][1] << "}" << endl;
    cout << "arr2d_1" << endl;
    for(int i=0; i<2; i++)
        cout << "{" << arr2d_1[i][0] << ", " << arr2d_1[i][1] << "}" << endl;

    return 0;
}
#include<iostream>
using namespace std;

const char STAR = '*';
const char SPACE = ' ';

int main() {

    cout << "--------------------------------------" << endl;
    cout << "Q1:" << endl;

    /*
             *
            **
           ***
          ****
         ***** 
    */
    //for문은 최대 3개까지 사용가능
    for(int i=0; i<5; i++) {                
        for(int j=4; j>=i; j--)
            cout << SPACE;
        for(int j=0; j<=i; j++)
            cout << STAR;
        cout << endl;
    }

    cout << "--------------------------------------" << endl;
    cout << "Q2:" << endl;

    /*
          *
         ***
        ***** 
    */
    //for문은 최대 3개까지 사용가능
    for(int n=0; n<3; n++) {
        int stars = 2*n + 1;    //각 라인별 2n+1(홀수)개의 별을 출력.
        for(int i=2; i>n; i--)  //출력하는 공백은 2~0까지.
            cout << SPACE;
        for(int j=0; j<stars; j++) {
            cout << STAR;
        }
        cout << endl;
    }

    cout << "--------------------------------------" << endl;
    cout << "Q3:" << endl;
    /*
        *
         *
          *
         *
        *    
    */
    //for문은 최대 2개까지 사용가능
    for(int i=0; i<5; i++) {
        int spaces = i < 3 ? i : 4 - i; //출력해야 하는 공백은 0~2로 늘어났다가, i=3부터는 1씩 감소.
        for(int j=0; j<spaces; j++) {
            cout << SPACE;
        }
        cout << STAR;
        cout << endl;
    }

    cout << "--------------------------------------" << endl;
    return 0;
}
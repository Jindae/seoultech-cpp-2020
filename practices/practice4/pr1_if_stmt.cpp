#include<iostream>
using namespace std;

int global = 10;
int update() {
    global = 1;
    return 1;
}

int main() {
    int a = 1, b = 5, c = 3;

    //두 if-else문의 실행결과 비교.
    if(a > b) {
        cout << "a is greater than b" << endl;
    } else if(b >= c) {
        cout << "b is greater than or equal to  c" << endl;
    } else {
        cout << "c is greater than b" << endl;
    }

    if(a > b) {
        cout << "a is greater than b" << endl;
    } else {
        if(b >= c) {
            cout << "b is greater than or equal to  c" << endl;
        } else {
            cout << "c is greater than b" << endl;
        }
    }    

    //ternary operator
    a = b > c ? 10 : 0; //b = 5, c = 3
    cout << "a = " << a << endl;

    //short circuiting
    a = -1;
    if(a > 0 && update() > 0) { //update() changes global to 1.
        cout << "condition is true" << endl;
    } else {
        cout << "condition is false" << endl;
    }
    cout << "global = " << global << endl;

    //condition with assignment
    if((a=b-c)>0) //b = 5, c = 3
        cout << "a = " << a << endl;

    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sum = 0;    
    //basic for statement
    int length = sizeof(a)/sizeof(int);
    for(int i=0; i<length; i++) {
        sum += a[i];
    }
    cout << "sum = " << sum << endl;

    //Ranged for statement
    sum = 0;
    for(int i : a) {
        sum += i;
    }
    cout << "sum = " << sum << endl;

    //5x5 matrix 
    int x[5][5] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    };
    for(int i=0, j=0; i<5 && j<5; i++, j++) {
        for(int n=0; n<i; n++)
            cout << " ";
        cout << x[i][j] << endl;
    }

    /*
        #
        ##
        ###
    */
    for(int i=0; i<3; i++) {
        for(int j=0; j<=i; j++) {
            cout << "#";
        }            
        cout << endl;
    }

    return 0;
}
#include<iostream>
#include<time.h>
using namespace std;

int fact(int n) {
    if(n == 1 || n == 2) 
        return n;
    else
        return n * fact(n-1);
}

int iter_fact(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) 
        fact *= i;
    return fact;
}

int fibonacci(int n) {
    if(n == 0 || n == 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int iter_fib(int n) {
    int prevPrevNum, prevNum = 0, currNum = 1;
    for(int i=1; i<n; i++) {
        prevPrevNum = prevNum;
        prevNum = currNum;
        currNum = prevPrevNum + prevNum;
    }
    return currNum;
}

int main() {
    cout << "Factorial of 5 " << fact(5) << endl;
    cout << "Factorial of 5 " << iter_fact(5) << endl;

    clock_t s_time = clock();
    int repeat = 10000; //1만번 반복.
    for(int n=0; n<repeat; n++) {
        fibonacci(20);
    }    
    clock_t e_time = clock();
    cout << "Recursive Fibonacci Exec. Time: " << (double)(e_time-s_time)/CLOCKS_PER_SEC << "s" << endl;

    s_time = clock();
    for(int n=0; n<repeat; n++) {
        iter_fib(20);
    }    
    e_time = clock();
    cout << "Iterative Fibonacci Exec. Time: " << (double)(e_time-s_time)/CLOCKS_PER_SEC << "s" << endl;
    return 0;
}


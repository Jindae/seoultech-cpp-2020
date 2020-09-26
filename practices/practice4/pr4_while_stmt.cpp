#include<iostream>
#include<string>
using namespace std;

int main() {

    //while loop
    string input = " ";
    while(!input.empty()) {
        cout << "Input your string: ";
        getline(cin, input);
        cout << "your input is " << input << endl;
    }

    //초기 조건 문제 - 이 지점에서 !input.empty() = false임.
    while(!input.empty()) {
        cout << "Input something: ";
        getline(cin, input);
        cout << "your input is " << input << endl;
    }

    cout << "Using do-while loop" << endl;
    do{
        cout << "Input your string again: ";
        getline(cin, input);
        cout << "your input is " << input << endl;
    } while(!input.empty());

    return 0;
}
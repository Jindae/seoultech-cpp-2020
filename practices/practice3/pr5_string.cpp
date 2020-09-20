#include<iostream>
#include<string>    //string클래스 사용을 위해
using namespace std;

int main() {

    char str0[10] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};
    char str1[8] = "program";
    char str2[] = "program";

    cout << "str0 = " << str0 << endl;
    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;

    //문자열 자르기
    str0[3] = '\0';
    cout << "str0 = " << str0 << endl;

    //string클래스
    string string1 = "string ";
    string string2 = "class";
    string str = string1 + string2;
    cout << "string1 + string2 = " << str << endl;

    return 0;
}
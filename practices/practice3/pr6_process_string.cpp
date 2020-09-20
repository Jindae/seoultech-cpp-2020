#include<iostream>
#include<string>    //string클래스 사용을 위해
#include<cstring>   //c스타일 문자열 라이브러리
using namespace std;

int main() {

    string string1 = "string ";
    string string2 = "class";
    string str = string1 + string2;
    char str0[10] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};

    //문자열 대입
    string1 = string2;
    cout << "string1 = " << string1 << endl;
    cout << "str = " << str << endl;

    //문자열 길이
    int len1 = str.size();
    int len2 = strlen(str0);
    cout << "length of \"" << str << "\" = " << len1 << endl;
    cout << "length of \"" << str0 << "\" = " << len2 << endl;

    //특정위치 문자 얻기 at(index)
    cout << "3rd character of str: " << str.at(2) << endl; //인덱스에 주의.

    //부분 문자열 얻기 substr(start index, length)
    cout << "First 6 characters: \"" << str.substr(0, 6) << "\"" << endl;
    cout << "From 8th character to the end: \"" << str.substr(7) << "\"" << endl;   //인덱스 차이에 주의.
    cout << "From 4th to 6th: \"" << str.substr(4, 3) << "\"" << endl;    //인덱스+길이에 주의.

    //문자열 검색 str.find(query, start_index)
    str = "programming introduction";
    int index = str.find("ro");
    cout << "index of \"ro\" = " << index << endl;
    index = str.find("ro", index+1);  //이미 찾은 곳 이후부터 다시 검색
    cout << "index of 2nd \"ro\" = " << index << endl;

    //문자열 바꾸기 str.replace(start_index, length, new_string)
    str = "I like dog";
    string q = "dog";
    cout << "original str = " << str << endl;
    str.replace(str.find(q), q.size(), "dragon!");   //dog를 찾아 dragon!으로 변경.
    cout << "replaced str = " << str << endl;

    //문자열 입력 받기1
    char your_char[] = {};
    string your_input;
    cout << "Input something with space(e.g. string class): ";
    cin >> your_char;
    cout << "My input string is " << your_char << endl;     //띄어쓰기 전까지만 인식.

    cout << "Input something with space again: ";  
    cin >> your_input;
    cout << "My input string is " << your_input << endl;    //이전에 입력받은 부분이 그대로 출력됨.

    cin.ignore(32767, '\n'); //입력된 내용 초기화. '\n'이 제거될 때까지 최대 32767문자를 무시.

    //문자열 입력 받기2 getline()
    cout << "Input something with space(e.g. string class): ";
    cin.getline(your_char, 20);
    cout << "My input string is " << your_char << endl;

    cout << "Input something with space(e.g. string class): ";
    getline(cin, your_input);
    cout << "My input string is " << your_input << endl;
    
    return 0;
}
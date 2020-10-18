#include<iostream>
using namespace std;

int main() {

    struct Person {
        int id; //field1
        string name; //field2
        int age; //field3
    }; //;를 잊지 말 것.

    //Field에 값 지정.
    Person dva;
    dva.id = 1000;
    dva.name = "Song Hana";
    dva.id += 100;
    
    cout << "D.VA's ID: " << dva.id << endl;
    cout << "D.VA's Name: " << dva.name << endl;
    cout << "D.VA's Age: " << dva.age << endl;

    Person genji = {1111, "Genji", 35};
    //C++11
    Person winston {9999, "Winston"}; //값이 없으면 0으로 초기화.

    cout << "Age of " << winston.name;
    cout << " is " << winston.age << endl;

    struct PetShop {
        Person owner;
        string address;        
    };

    PetShop store = { winston, "Gibraltar"};
    cout << "Store Owner's name is ";
    cout << store.owner.name << endl;

    return 0;
}
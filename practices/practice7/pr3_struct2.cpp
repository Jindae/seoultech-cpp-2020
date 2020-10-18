#include<iostream>
using namespace std;

struct Person {
    int id; 
    string name;
    int age;
};

Person clone(Person p) {
    return { p.id+1000, p.name, 1 };
}

int main() {
    Person* people = new Person[100];
    Person people2[100] = { {1000, "Garen", 100} };

    //값을 지정한 경우.
    cout << "ID: " << people2[0].id << endl;
    cout << "Name: " << people2[0].name << endl;
    cout << "Age: " << people2[0].age << endl;

    //값을 지정하지 않은 경우.
    cout << "ID: " << people2[2].id << endl;
    cout << "Name: " << people2[2].name << endl;
    cout << "Age: " << people2[2].age << endl;

    //구조체 포인터
    Person keanu = { 1, "Keanu Reeves", 56 };
    Person* neo = &keanu;    
    cout << "His name is " << keanu.name << endl;
    cout << "Neo's real name is " << neo->name << endl;

    //함수로 호출
    Person newPerson = clone(keanu);
    cout << "New person is also " << newPerson.name << endl;
    cout << "But his age is " << newPerson.age << endl;

    return 0;
}
#include<iostream>
using namespace std;

int main() {

    class Person {
        private:
            const int id;
            string name;
            int age = 19;

        public:
            Person(int id, string name) : id(id) {
                this->name = name;
                cout << "1st Constructor!" << endl;
            }

            Person(int id, string name, int age) : Person(id, name) {
                this->age = age;
                cout << "2nd Constructor!" << endl;
            }

            void print() {
                cout << "I'm " << name << ", and I'm ";
                cout  << age << " years old." << endl;
            }

            ~Person() {
                cout << "Destructor!! - " << name << endl;
            }
    }; //;를 잊지 말 것.

    //기본 생성자가 없으므로 반드시 매개변수 필요.
    Person dva(111, "Song Hana");
    dva.print();

    Person mcCree(123, "Jesse McCree", 37);
    mcCree.print();

    //포인터로 동적할당.
    Person* p = new Person(101, "Dying Man", 99);
    p->print();
    delete p;

    class Person2 {
        private:
            int id;
            string name;
            int age;

        public:
            Person2(int id = 0, string name = "", int age = 1) {
                this->id = id;
                this->name = name;
                this->age = age;
            }
            void print() {
                cout << "ID: " << id;
                cout << "\tName: " << name;
                cout << "\tAge: " << age << endl;
            }
    };

    Person2 p1 (111);
    Person2 p2 (123, "Another Person");
    p1.print();
    p2.print();    

    return 0;
}
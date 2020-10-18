#include<iostream>
using namespace std;

int main() {

    class Person {
        private:
            int id;
            string name;
            int age;

        public:            
            Person() {
                id = 0;
                name = "";
                age = 0;
            }

            Person(string name, int age) {
                id = 0;
                this->name = name;
                this->age = age;
            }
            
            //잘못된 생성자.
            Person(int id, string name, int age) {
                id = id;
                name = name;
                age = age;
            }

            void printName() {
                cout << "My name is " << name << endl;
            }        
    }; //;를 잊지 말 것.

    Person p;   //기본 생성자.
    p.printName();

    Person mcCree("Jesse McCree", 37); //매개변수 이용.
    mcCree.printName();

    return 0;
}
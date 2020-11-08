#include<iostream>
#include<vector>
#include<cmath>
#include "classes/Student.hh"

const double EPS = 0.00001;
bool equals(double, double);

bool test1();
bool test2();
bool test3();
bool test4();

int main() {
    int passed = 0;
    std::vector<std::function<bool()>> tests = 
        { test1, test2, test3, test4 };
    for(int i=0; i<tests.size(); i++) {
        std::function<bool()> test = tests[i];
        if(test())
            passed++;
        else
            std::cout << "test" << i+1 << " failed." << std::endl;
    }
    std::cout << passed << "/" << tests.size() << " tests passed. " << std::endl;
    return passed == tests.size() ? 0 : 1;
}

bool equals(double x, double y) {
    double delta = std::abs(x-y);
    return delta <= EPS;
}

bool test1() {
    //Student class test.
    bool result = true;
    Student* s = new Student(10, "S1");
    result &= equals(s->getGPA(), -1.0);
    char grades[5] = {'A', 'B', 'C', 'D', 'F'};
    for(char g : grades) {
        result &= s->addGrade(g);
    }
    result &= !s->addGrade('E');
    result &= equals(s->getGPA(), 2.0);

    return result;
}

bool test2() {
    //CSEStudent class test.
    bool result = true;
    CSEStudent* s = new CSEStudent(10, "Tester");
    result &= s->getName() == "Tester";
    result &= equals(-1.0, s->getGPA());
    s->addGrade('A'); s->addGrade('A'); s->addGrade('F');
    result &= equals(4.0, s->getGPA());

    return result;
}

bool test3() {
    //GradStudent class test.
    bool result = true;
    GradStudent* s = new GradStudent(10, "Grad");
    std::string degree = "PhD";
    result &= s->setDegree(degree);
    result &= s->getDegree() == degree;

    return result;
}

bool test4() {
    //CSEGradStudent class test.
    bool result = true;
    CSEGradStudent* s = new CSEGradStudent(10, "CSEGrad");
    std::string degree = "PhD";
    result &= s->setDegree(degree);
    result &= s->getDegree() == degree;
    s->addGrade('A'); s->addGrade('A'); s->addGrade('F');
    for(int i=0; i<3; i++)
        s->addGrade('F');
    result &= !s->addGrade('A');

    return result;
}
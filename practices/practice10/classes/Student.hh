#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
#include <vector>

/*
 * Student가 기본 클래스.
 * CSEStudent, GradStudent는 Student클래스를 상속.
 * CSEGradStudent는 CSEStudent와 GradStudent를 모두 상속.
 * 클래스 선언을 적절하게 수정하여 컴파일 가능하고 테스트를 만족시키는 클래스를 구현하세요.
 */

class Student {
    private:            
        int studentId;
        std::string name;
        std::vector<char> grades;    
    public:
        Student(int, std::string);
        int getStudentId();
        std::string getName();              
        double getGPA();
        bool addGrade(char grade);
};

class CSEStudent {
    private:
        std::vector<std::string> prgLangs;
    public:
        CSEStudent(int, std::string);
        double getGPA();
};

class GradStudent {
    private:
        std::string degree;
    public:
        GradStudent(int, std::string);
        bool setDegree(std::string degree);
        std::string getDegree();
};

class CSEGradStudent {
    public:
        CSEGradStudent(int, std::string);
        bool addGrade(char grade);
};
#endif
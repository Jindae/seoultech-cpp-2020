#include "Student.hh"

/* Student.hh에 선언된 클래스에 맞게 생성자와 함수들을 구현.
 * 함수에 관련된 설명이 제시된 경우 요구사항에 맞게 함수를 구현하세요.
 * 함수를 재정의 하는 경우는 파생 클래스 객체에서 언제나 그 클래스의 함수를 
 * 실행할 수 있도록 선언 및 정의를 해야합니다.
 * 그 외 추가로 구현을 위해 필요하거나 컴파일 에러 등을 피하기 위해 필요한 경우,
 * Student.hh에 선언을 추가하고 이 파일에 구현해도 됩니다.
 */

/*
 * Student class 구현.
 * 생성자, getStudentId(), getName()은 이미 구현됨.
 * addGrade()와 getGPA()를 구현.
 * 
 * addGrade()
 * A, B, C, D, F의 char형 값을 받아 grades에 저장.
 * 정상적으로 저장되면 true 반환, 다른 값이 들어오면 저장하지 않고 false 반환. 
 * 
 * getGPA()
 * 현재 객체의 grades에 들어있는 값의 평균을 구하여 반환.
 * A:4.0, B:3.0, C:2.0, D:1.0, F:0.0의 점수로 변환.
 * Hint: ASCII코드에서 A는 65값을 가짐.
 * 만약 grades에 값이 없는 경우에는 -1.0을 반환.
 */
Student::Student(int studentId, std::string name) {
    this->studentId = studentId;
    this->name = name;
}
int Student::getStudentId() {
    return this->studentId;
}
std::string Student::getName() {
    return this->name;
}

bool Student::addGrade(char grade) {    

}

double Student::getGPA() {

}

/*
 * CSEStudent class 구현.
 * 
 * getGPA() 함수 재정의.
 * F인 경우는 무시하고 평점을 계산.
 * 예를 들어, A, A, F의 학점인 경우 4.0으로 계산.
 * 학점이 없는 경우 -1.0반환.
 * 필요한 경우 Student.hh의 내용을 바꿀 것.
 */


/* GradStudent class 구현
 *
 * setDegree(std::string degree)
 * 값을 입력받아 degree멤버 변수에 값을 저장
 * degree는 오로지 Master / PhD 두 값만을 가질 수 있음.
 * 정상적인 값인 경우 값을 바꾸고 true반환, 아닌 경우는 바꾸지 않고 false반환.
 * 
 * getDegree() - Getter로 현재 객체의 degree값을 반환.
 * 
 */



/* CSEGradStudent class 구현
 *
 * addGrade() 재정의.
 * 이수할 수 있는 학점에 제한을 두도록 구현.
 * 현재 학점이 저장된 과목의 숫자가 6개를 넘었다면 더 이상 학점이 추가되지 않도록.
 * 학점이 추가되면 true를, 추가되지 않았다면 false를 반환.
 */
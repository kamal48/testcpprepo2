#include "Student.h"
#include<string>
#include<iostream>
Student::Student(){
}

Student::Student(int studentId) {
	_studentId = studentId;
    _name = std::string("Name_")+std::to_string(_studentId);

}
int Student::getStudentId() {
    return _studentId;
}
std::string Student::getName() const {
    return _name;
}
void Student::printDetails() const {
    std::cout<<_studentId <<"\t";
    std::cout<<_name<<"\n";
}

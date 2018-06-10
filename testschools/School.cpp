#include "School.h"
#include<string>
#include<iostream>
#include<vector>
School::School(int numStudents) {
	_numStudents = numStudents;
    for (int i = 0; i < numStudents; i++) {
        _students.push_back(Student(i));
    }
}

School::School(const School &s2) {
    std::cout << "debugging"<<"\n";
}
School::~School(){
   
};
int School::getNumStudents() {
	return _numStudents;
}

void School::setNumStudents(int n) {
	_numStudents = n;
}
void School::populateStudents(int n){
    
        for (int i=0;i<n;i++){
            Student s1(i);
            _students.push_back(s1);
    }
}
void School::printAllDetails() const {
    std::cout<< "--------------" <<"\n";
    std::cout<< _numStudents <<"\n";
    for(int i =0; i<_numStudents;i++){
        const Student *k = &_students[i];
        k->printDetails();
    }
    std::cout<< "--------------" <<"\n";
}

void School::clearAllDetails() {
    _numStudents = 0;
    _students.clear();
}

void School::modifyDetails(int i,const std::string &k){
    if (i>=_numStudents) {
        std::cout << "Index Exceeding no of students.";
    }
    _students[i]._name = k;
}

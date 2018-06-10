#include "School.h"
#include<string>
#include<iostream>
#include<vector>
School::School(int numStudents) {
	_numStudents = numStudents;
}

School::School(const School &s2) {
    std::cout << "debugging";
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
void School::printAllDetails(){
    std::cout<< _numStudents <<"\n";
    for(int i =0; i<_numStudents;i++){
        Student *k = &_students[i];
        k->printDetails();
    }
}

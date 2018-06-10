#include "stdio.h"
#include <iostream>
#include "School.h"
School createSchoolObj() {
    School s(5);
    std::cout << "pinter address = " << &s;
    return s;
}

int main() {
    printf("hello\n");
    School s = createSchoolObj();
    std::cout << "pointer address = " << &s;
    School s2 = s;
    std::cout << "pointer address = " << &s;
    s.populateStudents(5);
    std::cout << "pointer address = ";
    s.printAllDetails();
    
    
    
    
}


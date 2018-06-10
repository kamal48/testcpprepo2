#include "stdio.h"
#include <iostream>
#include "School.h"

School createSchoolObj() {
    School s(5);
    std::cout << "pinter address = " << &s;
    return s;
}

void printdetails(const School &s){
    s.printAllDetails();
}

void cleardetails(School &s){
    s.clearAllDetails();
}

int main() {
    printf("hello\n");
    School s = createSchoolObj();
    printdetails(s);
    
    //cleardetails(s);
    printdetails(s);
    s.modifyDetails(6,"kamal");
    //printdetails(&s);
    printdetails(s);
}


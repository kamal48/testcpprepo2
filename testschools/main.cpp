#include "stdio.h"
#include <iostream>
#include "School.h"
#include "Employee.h"
#include "Company.h"
#include "CompanyDataBaseManager.h"
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
    CompanyDataBase data = CompanyDataBase(2);
    //Company c("a1",433,5);
    data.printAllDetails();
    data.modifyDetails("tata",2,"raja");
    data.printAllDetails();

        //addEmployee(id,name,age,destination);
    
    
    //c =  data.AddCompany(name);
    //c->addEmployee(eId, name , adfaljaf)
    //1 c->getNumberOfEmployee();
    
    //c->addEmployee(eId, name , adfaljaf)
    //2 c->getNumberOfEmployee();
    
    //cleardetails(s);
    //printdetails(s);
    //s.modifyDetails(6,"kamal");
    //printdetails(&s);
    //printdetails(s);
    
}


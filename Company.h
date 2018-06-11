#ifndef HH__COMPANY_H
#define HH__COMPANY_H

#include "Employee.h"
#include <stdio.h>
#include <string>
#include <vector>
class Company {
    std::string _name;
    int _id;
    std::vector<Employee> _employees;
    std::vector<Employee>::iterator itr;
    
public:
    Company();
    Company(std::string name,int id,int numEmployee);
    int getId() const;
    std::string getName() const;
    Employee* getEmployee(int id);
    void printAllDetails() const;
    void addEmployee(int id,std::string name,int age,std::string destination);
    
};

#endif

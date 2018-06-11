#include<string>
#include<iostream>
#include "Company.h"

Company::Company(){
    
}
Company::Company(std::string name,int id,int numEmployee){
    _name = name;
    _id = id;
    
}
int Company::getId() const{
    return _id;
}
std::string Company::getName() const{
    return _name;
}
Employee* Company::getEmployee(int id) {
    for ( int i = 0; i<_employees.size(); i++) {
        if (_employees.at(i).getId()==id) {
            return &_employees.at(i);
        }
    }
    return NULL;
}
void Company::printAllDetails() const{
    std::cout<<"-----------------------------------------";
    std::cout<<"Name of the Company: " << _name << "\n";
    std::cout<<"Id of the Company : " << _id<< "\n";
    for ( int i = 0; i<_employees.size(); i++) {
        Employee e = _employees.at(i);
        e.printAllDetails();
    }
    // Ask prince about using iterator in the loop.
    std::cout<<"-----------------------------------------";
}
void Company::addEmployee(int id,std::string name,int age,std::string destination){
    Employee e = Employee(name,id,age,destination);
    _employees.push_back(e);
}


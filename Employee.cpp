#include<string>
#include<iostream>
#include "Employee.h"

Employee::Employee(){
    
}
Employee::Employee(std::string name, int id, int age, std::string designation){
    _id = id;
    _name = name;
    _age = age;
    _designation = designation;
}
int Employee::getId() const{
    return _id;
}
std::string Employee::getName() const{
    return _name;
}
std::string Employee::getDesignation() const{
    return _designation;
}
int Employee::getAge() const{
    return _age;
}
void Employee::printAllDetails() const{
    std::cout<<"-----------------------------------------";
    std::cout<<"Name of the Employee : " << _name << "\n";
    std::cout<<"Age of the Employee : " << _age << "\n";
    std::cout<<"Designation of the Employee : " << _designation << "\n";
    std::cout<<"-----------------------------------------";
    
}
void Employee::setName(std::string name){
    _name = name;
    }

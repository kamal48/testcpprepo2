#ifndef HH__EMPLOYEE_H
#define HH__EMPLOYEE_H

#include <stdio.h>
#include <string>
class Employee {
private:
    std::string _name;
    int _id;
    int _age;
    std::string _designation;
public:
    Employee();
    Employee(std::string name, int id, int age, std::string designation);
    int getId() const;
    std::string getName() const;
    std::string getDesignation() const;
    int getAge() const;
    void printAllDetails() const;
    void setName(std::string name);
};
#endif

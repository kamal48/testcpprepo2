#include<string>
#include<iostream>
#include "CompanyDataBaseManager.h"
CompanyDataBase::CompanyDataBase(){
    
}
CompanyDataBase::CompanyDataBase(int numCompanies){
    //_numCompany = numCompanies;
    for (int i = 0; i < numCompanies;i++) {
        int id,numberEmployee;
        std::string name;
        std::cout<<"Company Name: ";
        std::cin>>name;
        std::cout<<"Company ID: ";
        std::cin>>id;
        std::cout<<"No. of Employees in Company:";
        std::cin>>numberEmployee;
        Company *c = addCompany(name, id, numberEmployee);
        
    
        
        for (int i = 0; i < numberEmployee;i++) {
            int id1,age1;
            std::string name1,designation;
            
            std::cout<< "Enter Name of Employee :" <<"\n";
            std::cin>>name1 ;
            std::cout<< "Enter Id of Employee :" <<"\n";
            std::cin>> id1 ;
            std::cout<< "Enter age of Employee :" <<"\n";
            std::cin>>age1;
            std::cout<< "Enter designation of Employee :" <<"\n";
            std::cin>>designation;
            
            c->addEmployee(id1, name1, age1, designation);
            std::cout<<"--------------------------------";
            //Employee e = Employee("kk"+std::to_string(i), i, 20, "pro"+std::to_string(i));
            //_employees.push_back(e);
        }
        
        
        std::cout<<"--------------------------------------------------";
        //Company cs = Company("CS"+std::to_string(i), i,4);
        //_companies.push_back(cs);
    }

}



CompanyDataBase::~CompanyDataBase(){
    
}

void CompanyDataBase::printAllDetails() const{
        for ( int i = 0; i<_companies.size(); i++) {
        Company c = _companies.at(i);
        c.printAllDetails();
    }
}
size_t CompanyDataBase::getNumCompaies() const{
    return _companies.size();
}

Company* CompanyDataBase::addCompany(std::string name,int id,int numberemployee){
    Company c = Company(name,id,numberemployee);
    _companies.push_back(c);
    return &_companies.back();
}

void CompanyDataBase::modifyDetails(std::string companyName,int id,std::string newEmployeeName){
    Company* c;
    Employee* e;
    c = getCompany(companyName);
    e = c->getEmployee(id);
    e->setName(newEmployeeName);
    
}
Company* CompanyDataBase::getCompany(std::string name){
    for ( int i = 0; i<_companies.size(); i++) {
        if (_companies.at(i).getName()==name) {
            return &(_companies.at(i));
        }
      
    }
    return NULL;
    //return _employees;
}

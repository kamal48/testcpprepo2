#include "Company.h"
#include <stdio.h>
#include <vector>
#include <string>

class CompanyDataBase {
    std::vector<Company> _companies;
    public:
    CompanyDataBase();
    CompanyDataBase(int numCompanies);
    ~CompanyDataBase();
    size_t getNumCompaies()const;
    void setNumCompanies(int n);
    void populateCompanies(int numcompanies);
    void populateEmployees(std::vector<Company> &company);
    void printAllDetails() const;
    Company* addCompany(std::string name,int id,int numberemployee);
    Company* getCompany(std::string name);
    void modifyDetails(std::string companyName,int id,std::string newEmployeeName);
};

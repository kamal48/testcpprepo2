#include <string>
class Student {
    int _studentId;
public:
    std::string _name;
    Student();
    Student(int studentId);
    int getStudentId();
    std::string getName() const;
    void printDetails() const;
    
};

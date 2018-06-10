#include <string>
class Student {
    int _studentId;
    std::string _name;
public:
    Student();
    Student(int studentId);
    int getStudentId();
    std::string getName() const;
    void printDetails() const;
    
};

#include "Student.h"
#include<vector>
class School {
public:
    int _numStudents;
  //  Student *_student;
    std::vector<Student> _students;
    std::vector<Student>::iterator i;
public:
	School(int numStudents);
    School(const School &p2);
    ~School();
	int getNumStudents();
	void setNumStudents(int n) ;
    void populateStudents(int n);
    void printAllDetails();
};


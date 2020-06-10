// project -E.Brown
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "MyArray.h"
#include "Course.h"

class Course;

class Student {
public:
    Student();
    Student(std::string n);
    std::string getName() const;
    void setName(std::string n);
    void addCourse(Course &cob);//////
    void dropCourse(Course &cob);//Course &cob, int index here?
    void display();
    friend std::ostream& operator <<(std::ostream &out, const Student &sob);

private:
  std::string name;
  MyArray<Course*>courses;//like this for b?
};


#endif

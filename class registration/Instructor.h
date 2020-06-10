// project -E.Brown
#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <iostream>
#include "MyArray.h"
#include "Student.h"
#include "Course.h"


class Course;  // forward declaration of class A

class Instructor {
public:
    Instructor();
    Instructor(std::string n);
    Instructor(std::string n, std::string d);
    std::string getName() const;
    void setName(std::string n);
    std::string getDepartment() const;
    void setDepartment(std::string d);
    void addCourse(Course &cob);//////
    void dropCourse(Course &cob);
    void display();
private:
   std::string name;
   std::string department;
   MyArray<Course*>courses;//like this?
  };

#endif

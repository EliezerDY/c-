// project -E.Brown
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include "MyArray.h"
#include "Student.h"
#include "Instructor.h"

class Student;  // forward declaration of class A
class Instructor;

class Course {
public:
     Course();
     Course(std::string n);
     Course(std::string n, Instructor &inob);

    std::string getName() const;
    void setName(std::string n);
    Instructor getInstructor() const;
    void setInstructor(Instructor &inob);
    void addStudent(Student &sob);
    void dropStudent(Student &sob);
    void dropInstructor();
    void display();
private:
   std::string name;
   Instructor *instructors;
   MyArray<Student*>students;
  };

#endif

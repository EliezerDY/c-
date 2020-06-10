// project -E.Brown
#include <iostream>
#include "MyArray.h"
#include "Student.h"
#include "Course.h"
#include "Instructor.h"

int main() {
    std::cout << std::endl;
    // std::cout <<"Hello";
    Instructor *i1 = new Instructor("Prof. S. Trowbridge", "Engineering Technology");
    Instructor *i2 = new Instructor("Prof. A. Guozhen", "Engineering Technology");
    Instructor *i3 = new Instructor("Prof. J. Sun", "Engineering Technology");

    Course *c1 = new Course("ET-580/D2", *i1);
    Course *c2 = new Course("ET-575/B4", *i2);
    Course *c3 = new Course("ET-574/B2", *i3);

    Student *s1 = new Student("Boba Fett");
    Student *s2 = new Student("Zam Wesell");
    Student *s3 = new Student("Qui-Gon Jinn");
    Student *s4 = new Student("Mace Windu");
    Student *s5 = new Student("Kit Fisto");
    Student *s6 = new Student("Barriss Offee");
    Student *s7 = new Student("Eeth Koth");
    Student *s8 = new Student("Count Dooku");
    Student *s9 = new Student("Aayla Secura");

    s1->addCourse(*c1);
    s1->addCourse(*c3);
    s2->addCourse(*c3);
    s3->addCourse(*c2);
    s3->addCourse(*c3);
    s4->addCourse(*c1);
    s5->addCourse(*c3);
    s5->addCourse(*c1);
    s6->addCourse(*c3);
    s6->addCourse(*c2);
    s7->addCourse(*c1);
    s7->addCourse(*c2);
    s7->addCourse(*c3);
    s8->addCourse(*c1);
    s8->addCourse(*c2);
    s9->addCourse(*c2);
    s9->addCourse(*c3);

    c1->display();
    c2->display();
    c3->display();

    s6->display();//displays courses
    std::cout << std::endl;

    std::cout << ">> Dropping " << c2->getName() << " for " << *s6 << std::endl << std::endl;
    s6->dropCourse(*c2);
    s6->display();
    std::cout << std::endl;

    std::cout << ">> Dropping the instructor for " << c2->getName() << std::endl;
    c2->dropInstructor();
    c2->display();

    i2->display();

    std::cout << std::endl;
    return 0;
}

// project -E.Brown
#include "Course.h"


// instance functions
 Course:: Course():  Course("") {
}
Course:: Course(std::string n): name(n) {
}
 Course:: Course(std::string n, Instructor &inob):  name(n), instructors(&inob){
}

std::string  Course::getName() const {
    return name;
}

void Course::setName(std::string n) {
    name = n;
}
  Instructor Course::getInstructor() const {
    return *instructors;//instructors
}

void Course::setInstructor(Instructor &inob) {
    instructors = &inob;//use a pointer?
}
//is this right?
// addStudent
void Course::addStudent(Student &sob){
  int index =students.getIndex(&sob);
  if (index== -1){
    students.push_back(&sob);
    sob.addCourse(*this);
  }
    return;
}

//dropStudent
void Course::dropStudent(Student &sob){
    int index =students.getIndex(&sob);//need to get the index
    if (index!= -1){
      students.erase(index);
      sob.dropCourse(*this);
    }
     return;
  }
//dropInstructor
 void Course::dropInstructor(){
   // getInstructor() = new Instructor();
     instructors = new Instructor();
     std::cout<<"-----------------------------------------------"<<std::endl;
 }
 //display function
 void Course::display(){
     std::cout<<getName()<<" - "<<getInstructor().getName()<<std::endl;
     std::cout<<std::endl;
     for(int i=0; i<students.getSize(); i++){
       std::cout<<i+1<<": ";
       std::cout<<*students[i]<<std::endl;
       }
    std::cout<<std::endl;
    std::cout<<"-----------------------------------------------"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"-----------------------------------------------"<<std::endl;
  }

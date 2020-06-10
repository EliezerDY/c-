// project -E.Brown
#include "Instructor.h"


// instance functions
Instructor::Instructor(): Instructor("Staff") {
}
Instructor::Instructor(std::string n): Instructor(n,""){
}
Instructor::Instructor(std::string n, std::string d): name(n), department(d){
}

std::string Instructor::getName() const {
    return name;
}

void Instructor::setName(std::string n) {
    name = n;
}
std::string Instructor::getDepartment() const {
    return department;
}

void Instructor::setDepartment(std::string d) {
    department = d;
}
//is this right?
//addCourse
void Instructor::addCourse(Course &cob){
    int index =courses.getIndex(&cob);
    if (index== -1){
      courses.push_back(&cob);
    }
      return;

}
//dropCourse
void Instructor::dropCourse(Course &cob){
    int index =courses.getIndex(&cob);
      if (index!= -1){
        courses.erase(index);
     }
       return;
}
//void function
 void Instructor::display(){
    std::cout<<"Instructor:"<<getName()<<"- "<<getDepartment()<<std::endl;
    std::cout<<"Courses: ";
      for(int i=0; i<courses.getSize(); i++){
        std::cout<<courses[i]->getName()<< " ";
      }
    std::cout<<std::endl;
}

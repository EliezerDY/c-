// project -E.Brown
#include "Student.h"


// instance functions
Student::Student(): Student("") {
}
Student::Student(std::string n): name(n){
}

std::string Student::getName() const {
    return name;
}

void Student::setName(std::string n) {
    name = n;
}
//is this right?
//addCourse
void Student::addCourse(Course &cob){
    int index =courses.getIndex(&cob);//check if in with get index
    if (index== -1){
      courses.push_back(&cob);
      cob.addStudent(*this);
  }
    return;
}
//dropCourse
void Student::dropCourse(Course &cob){
    int index =courses.getIndex(&cob);//diddo
    if (index!= -1){
      courses.erase(index);
      cob.dropStudent(*this);
  }
      return;
}
//display function
void Student::display(){
    std::cout<<"Student: "<<getName()<<std::endl;
    std::cout<<"Courses: ";
      for(int i=0; i<courses.getSize(); i++){
        std::cout<<courses[i]->getName()<< " ";
    }
        std::cout<<std::endl;

}
//overload ostream
std::ostream & operator << (std::ostream &out, const Student &sob)
{
    out << sob.name;//or student?
  return out;
}

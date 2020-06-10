#// project -E.Brown
# define variables
CXXFLAGS := -std=c++11

#eutable file and its dependencies
prog.exe : driver.o Instructor.o Course.o Student.o
	g++ -std=c++11 -o prog Instructor.o driver.o Course.o Student.o


# file dependencies
driver.o : Instructor.h Course.h Student.h MyArray.h
	g++ -std=c++11 -c driver.cpp
Student.o : Student.h MyArray.h
	g++ -std=c++11 -c Student.cpp
Instructor.o : Instructor.h MyArray.h
	g++ -std=c++11 -c Instructor.cpp
Course.o : Course.h MyArray.h
	g++ -std=c++11 -c Course.cpp
# files to remove
clean:
	del driver.o Student.o Instructor.o Course.o
	del prog.exe

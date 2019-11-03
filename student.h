#ifndef STUDENT_H
#define STUDENT_H
#include<string>
#include<list>
using namespace std;


class Student {

public: 

Student(string name, float grade)

{

  this->name=name;
  this->grade = grade;
  
}

void setStudentGrade(float);
float getStudentGrade();
void setStudentName(string);
string getStudentName();

private: 

string name;
float grade;


};
#endif
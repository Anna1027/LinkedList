#include <iostream>
#include <list>
#include <algorithm>
#include "student.h"
#include <functional>

using namespace std; 

void Student::setStudentGrade(float g){
  grade = g;
}

float Student::getStudentGrade(){
return grade;
}

void Student::setStudentName(string n){
  name = n;
}

string Student::getStudentName(){

  return name;
}
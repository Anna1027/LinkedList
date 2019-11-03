#include <iostream>
#include "student.h"
#include <string>
#include <list>
#include <algorithm>
#include <functional>

using namespace std;


void addStudent(list <Student>&);   
void remove_student(list <Student>&);
void updateGrade(list<Student>&);
Student search(list <Student>&);
void display(list <Student>&);

int main() {

  char choice; 
  int option;

  list<Student>students; //creating a list of students
  
do {
        cout<<"Choose option:\n\t1. Add Student\n";
        cout<<"\t2. Remove Student\n";
        cout<<"\t3. Update grade\n";
        cout<<"\t4. Search Student\n";
        cout<<"\t5. Display Records\n";

    cin>>option;

switch(option)

{
case 1: addStudent(students);

break;

case 2: remove_student(students);

break;

case 3: updateGrade(students);

break;

case 4: search(students);

break;

case 5: display(students);

break;

default:

cout<<"Invaild Option, Please try again!\n";

break;

}

cout<<"Do you want another operation(y/n)? : ";

cin>>choice;
}
while(choice=='Y'||choice=='y');
}

//adding students to the list
void addStudent(list<Student> &students)

{

string name;
float grade;

cout<<"Please enetr the student name: ";
cin>>name;
cout<<"Please enter the student grade: ";
cin>>grade;

Student temp(name, grade);
students.push_back(temp);

}

//searching the student
Student search(list <Student> &students){

string name;

  cout<<"Please enter the student name: ";
  cin>>name;
  for (list<Student>::iterator it = students.begin(); it!= students.end(); ++it){

   if (name == it->getStudentName()){
      cout<<"You've found the student ! " << endl;
    }
      return *it;
  }
}

//removing a student
void remove_student(list <Student> & students)
{
  string name;

    cout<<"Please enetr the student name: ";
    cin>>name;
  for (list<Student>::iterator it = students.begin(); it!= students.end(); ++it){

   if (name == it->getStudentName()){
      cout<<"You've removed the student! " << endl;

    //Student researchResult = search(students);
    students.erase(it); 
    break;
    }
  }
}
//updating the student's grade
void updateGrade(list <Student> &students)
{

  float newgrade;
  string name;
  cout<<"Please enetr the student name: ";
  cin>>name;

  for (list<Student>::iterator it = students.begin(); it!= students.end(); ++it){

   if (name == it->getStudentName()){
      cout<<"You've found the student ! " << endl;
    
      cout<<"Please enter student new grade ";
      cin>>newgrade;

      it->setStudentGrade(newgrade);
     
     break;
     
   }  
 }
}

void display(list<Student>&students){

  cout<<"Displaying the student list: "<<endl;

  for (list<Student>::iterator it = students.begin(); it!= students.end(); ++it){

     cout<<"Name: "<<"\t"<<"Grades: "<<endl;
     cout<<it->getStudentName()<<"\t";

     cout<<it->getStudentGrade()<<endl;

  }
}


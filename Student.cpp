#include "Student.h"
#include <iostream>

// Assign studentId and name
void Student::assignDetails(int Id,char Sname) 
{
  studentId = Id;
  name = Sname;
}

// Display StudentId and Name
void Student::display() {
std::cout<<studentId<<name;
}
 
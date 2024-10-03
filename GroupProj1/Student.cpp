/*
* Group Members: Ethan Smith, Emily Monroe
*/
#include "Student.h"
#include <iostream>
using namespace std;

void Student::setGrade(double grade)
{
	this->grade = grade;
}
void Student::setLetterGrade(char letterGrade)
{
	this->letterGrade = letterGrade;
}
double Student::getGrade()
{
	return this->grade;
}
char Student::getLetterGrade()
{
	return this->letterGrade;
}
void Student::displayAll(Teacher teacher)
{
	cout << "\nStudent Name: " << this->getName() 
	     << "\tTeacher Name: " << teacher.getName()
	     << "\nGrade: " << this->grade
	     << "\nLetter Grade: " << this->letterGrade << '\n';
}
bool Student::operator<(const Student &other) const
{
	return grade < other.grade;
}


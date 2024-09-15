#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "Teacher.h"
using namespace std;
class Student : public Teacher
{
	private:
		double grade;
		char letterGrade;
	public:
		void setGrade(double);
		double getGrade();

		void setLetterGrade(char);
		char getLetterGrade();

		void displayAll(Teacher);

		bool operator<(const Student &other)const;
};
#endif

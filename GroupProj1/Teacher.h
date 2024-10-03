/*
* Group Members: Ethan Smith, Emily Monroe
*/
#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
using namespace std;

class Teacher
{
	private:
		string name;
		string building;
		int officeNum;
	public:
		void setName(string);
		string getName();

		void setBuilding(string);
		string getBuilding();

		void setOffice(int);
		int getOffice();

		void display();

};
#endif

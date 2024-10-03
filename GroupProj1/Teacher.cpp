/*
* Group Members: Ethan Smith, Emily Monroe
*/
#include <iostream>
#include "Teacher.h"
using namespace std;

void Teacher::setName(string name)
{
	this->name = name;
}
string Teacher::getName()
{
	return this->name;
}

void Teacher::setBuilding(string building)
{
	this->building = building;
}
string Teacher::getBuilding()
{
	return this->building;
}

void Teacher::setOffice(int officeNum)
{
	this->officeNum = officeNum;
}
int Teacher::getOffice()
{
	return this->officeNum;
}
void Teacher::display()
{
	cout << "\nName: " << this->name
	     << "\nBuilding: " << this->building
	     << "\nOffice Number: " << this->officeNum << '\n';
}

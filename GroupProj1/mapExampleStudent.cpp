#include <iostream>
#include <map>
#include "Student.h"
#include "Teacher.h"
using namespace std;

int main()
{
	Student students[10];
	string names[10] = {"Emily", "Ethan", "Laura", "Hayden", "Micah", "John", "Daniel", "Caleb", "Dora", "Diego"};
	double grades[10] = {87.5,101,98,94.32,69.42,79.89,50.54,74.23,87.17,90.43};
	char letterGrades[10] {'B','A','A','A','D','C','F','C','B','A'};
	for(int i = 0; i < 10; ++i)
	{
		students[i].setName(names[i]);
		students[i].setGrade(grades[i]);
		students[i].setLetterGrade(letterGrades[i]);
	}

	Teacher teacher;

	teacher.setName("Dr. Terwilliger");
	teacher.setBuilding("CPTMTH");
	teacher.setOffice(241);

	cout << "\n*****************************USING SIMPLE ARRAY**********************************\n";
	for(int i = 0; i < 10; ++i)
	{
		students[i].displayAll(teacher);
	}
	teacher.display();


	map<Student,Teacher> studentTeacherMap;
	cout << "\n*****************************USING MAP STL**********************************\n";
	for(int i = 0; i < 10; ++i)
	{
		studentTeacherMap.insert(pair<Student,Teacher>(students[i],teacher));
	}

	int temp = 0;
	for(map<Student,Teacher>::iterator it = studentTeacherMap.begin(); it != studentTeacherMap.end();++it)
	{
		cout << "\n-----------\n";
		cout << "Student #" << temp+1 << '\n'
		     << "-----------\n";
		students[temp].displayAll(teacher);
		temp++;
	}
	
}

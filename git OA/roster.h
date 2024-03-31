#ifndef ROSTER_H
#define ROSTER_H
#include <iostream>
#include <string>
#include <array>
#include "degree.h"
#include "student.h"

using namespace std;


class Roster {
public:
	Student* classRosterArray[5];

	//constructor
	Roster(int classSize);


	//functions
	string GetStudentID(int index);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);
	int classSize;
	int ind;
	void add(string studentID, string firstName, string lastName, string email, int age,
    int day1, int day2, int day3, DegreeProgram degreeProgram);






	//destructor
	~Roster();
};
#endif // roster_h

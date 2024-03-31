#ifndef STUDENT_H
#define STUDENT_H


#include <iostream>
#include <cstdlib>
#include <ctime>
#include "degree.h" 
using namespace std;

class Student {
private:
	string student_ID;
	int age;
	int daysInCourse[3];
	string first_name;
	string last_name;
	string email;
	DegreeProgram degree;


public:
	Student();
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degree);

	//setters

	void setID(string sID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string emailAddress);
	void setAge(int studentAge);
	void setDays(int day1, int day2, int day3);
	void setDegree(DegreeProgram program);


	// getters

	string getID() const;
	int getAge() const;
	string getFirstName() const;
	string getLastName() const;
	string getEmail() const;
	DegreeProgram getDegree() const;
	int* getDays();

	// printers


	void printID();
	void printFirstName();
	void printLastName();
	void printEmailAddress();
	void printAge();
	void printDaysToComp();
	void printDegreeProgram();
	void print() const;

};
#endif //student.h

#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
using namespace std;


#include "student.h"

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram) {
	this->student_ID = studentID;
	this->first_name = firstName;
	this->last_name = lastName;
	this->email = emailAddress;
	this->age = age;
	this->daysInCourse[0] = daysInCourse[0];
	this->daysInCourse[1] = daysInCourse[1];
	this->daysInCourse[2] = daysInCourse[2];
	this->degree = degreeProgram;
}

//// setters;;


void Student::setID(string sID) {
	this->student_ID = sID;

}

void Student::setFirstName(string firstName) {
	this->first_name = firstName;


}

void Student::setLastName(string lastName) {
	this->last_name = lastName;

	
}

void Student::setEmail(string emailAddress) {
	this->email = emailAddress;

}

void Student::setAge(int studentAge) {
	this->age = studentAge;

	
}
void Student::setDays(int day1, int day2, int day3) {
	this->daysInCourse[0] = day1;
	this->daysInCourse[1] = day2;
	this->daysInCourse[2] = day3;
}

void Student::setDegree(DegreeProgram program) {
	this->degree = program;
}

//getters

string Student::getID() const
{
    return student_ID;
}

int Student::getAge() const 
{
    return age;
}

string Student::getFirstName() const 
{
    return first_name;
}

string Student::getLastName() const
{
    return last_name;
}

string Student::getEmail() const 
{
    return email;
}

DegreeProgram Student::getDegree() const
{
    return degree;
}

 int* Student::getDays() { 
    return daysInCourse;

 }

 //printers 

 void Student::printID() {
	cout << student_ID;

}

void Student::printFirstName() {
	cout << first_name << endl;

}

void Student::printLastName() {
	cout << last_name << endl;

}

void Student::printEmailAddress() {
	cout << email << endl;

}

void Student::printAge() {
	cout << age << endl;

}

void Student::printDaysToComp() {
	cout << daysInCourse[0] << " " << daysInCourse[1] << " " << daysInCourse[2] << endl;

}





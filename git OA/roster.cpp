#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "roster.h"
#include <array>
#include <string>
using namespace std;


Roster::Roster(int classSize) {
    this->classSize = classSize;
	for (int i = 0; i < classSize; i++) {
		this->classRosterArray[i] = new Student;
	}
}

string Roster::GetStudentID(int index) {

	string sID = classRosterArray[index]->getID();
	return sID;
}

void Roster::add(string studentID, string firstName, string lastName, string email, int age,
	int day1, int day2, int day3, DegreeProgram degreeProgram) {
	int daysInCourse[3] = { day1, day2, day3 };


	classRosterArray[classSize] = new Student(studentID, firstName, lastName, email, age, daysInCourse, degreeProgram);
};

void Roster::remove(string StudentID) {
    bool found;
    for (int i = 0; i < classSize; i++){
        if (classRosterArray[i] == nullptr) {
			continue;
            
        }
        if (classRosterArray[i]->getID() == StudentID){
            delete classRosterArray[i];
            found = true;
            break;
        }
    }
      if (found == true) {
		cout << "Student #" <<StudentID << " removed." << endl;
      }
        else if (found == false){
            cout << "Student #" <<StudentID << "Not Found" << endl;
            
        }
      
}

void Roster::printAll() {
	cout << "All current students: " << endl;
	for (int i = 0; i < classSize; i++) {
			classRosterArray[i]->print();
	}
	cout << endl;
	return;
}

void Roster::printAverageDaysInCourse(string id) {
	int avg;
	for (int i = 0; i < classSize; i++) {
		avg = ((classRosterArray[i]->getDays()[0] +
			classRosterArray[i]->getDays()[1] +
			classRosterArray[i]->getDays()[2]) / 3);
		if (id == classRosterArray[i]->getID()) {
				cout << id << "s " <<  " average days in course:" << avg <<endl;
		}
	}
	return;
}

void Roster::printInvalidEmails() {
    cout << "Invalid email addresses:" << endl;
    for (int i = 0; i < classSize; ++i) {
        string email = classRosterArray[i]->getEmail();
        if (email.find('@') == string::npos || email.find('.') == string::npos || email.find(' ') != string::npos) {
            cout << email << endl;
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
	if (degreeProgram == DegreeProgram::SECURITY) {
		cout << "Students in the security program: ";
	}
	else if (degreeProgram == DegreeProgram::NETWORK) {
		cout << "Students in the Network program: ";
	}
	else if (degreeProgram == DegreeProgram::SOFTWARE) {
		cout << "Students in the Software program: ";
	}
	for (int i = 0; i < classSize; i++) {
		if (classRosterArray[i]->getDegree() == degreeProgram) {
			classRosterArray[i]->print();
			cout << endl;
		}
	}



	return;
}



Roster::~Roster() {
	for (int i = 0; i < 5; i++) {
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
	};
}

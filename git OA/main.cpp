#include <iostream>
#include <cstdlib>
#include <ctime>
#include "student.h"
#include <string>
#include <array>
#include "roster.h"
using namespace std;

int main () {

    const string studentData[] = 
{"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
 "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
  "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
   "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Michael,Youngblood,thekingyoungblood@gmail.com,21, 20, 30, 111,SOFTWARE"
};

 cout << "Course Title: C867 - Scripting and Programming Applications" << endl;
    cout << "Student Name: Michael Youngblood" << endl << endl;


 
    cout <<"Course Title: C867 - Scripting and Programing Applications << endl";
    cout << "C++ " << endl;
    cout << "Student ID: 011650917" << endl;
    cout << "Student Name: Michael Youngblood" << endl;
    cout << "   " << endl;



Roster *classRoster = new Roster(5);


//adding students to roster
 classRoster->add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, DegreeProgram::SECURITY);
    classRoster->add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, DegreeProgram::NETWORK);
        classRoster->add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, DegreeProgram::SOFTWARE);
            classRoster->add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, DegreeProgram::SECURITY);
                classRoster->add("A5", "Michael", "Youngblood", "thekingyoungblood@gmail.com", 21, 20, 30, 111, DegreeProgram::SOFTWARE);


classRoster->printAll();

  classRoster->printInvalidEmails();

    for (int i = 0; i < 5; i++) {

        classRoster->printAverageDaysInCourse(classRoster->GetStudentID(i));
    }
    cout << endl;
    cout << endl;

    classRoster->printByDegreeProgram(DegreeProgram::SOFTWARE);
    cout << endl;
    cout << endl;
    
    classRoster->remove("A3");
    cout << endl;

  
    classRoster->printAll();
    cout << endl;
  
    classRoster->remove("A3");
    cout << endl;

}





   







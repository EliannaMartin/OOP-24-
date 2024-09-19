#include <iostream>
#include "Student.h"
#include <string>
 using std::string;


Student::Student(string fName, string lName, int studentID) : firstName(fName), lastName(lName), SID(studentID) {

}

Student::Student(string fName, string lName, int studentID, int aGrade) : firstName(fName), lastName(lName), SID(studentID), grades(aGrade) {

}
    
string Student::getFirstName() {
    return firstName;
}
string Student::getLastName(){
    return lastName;
}
int Student::getSID(){
    return SID;
}
int Student::getGrades(){
    return grades;
}


void Student::setFirstName(string fName){
    fName = firstName;
}
void Student::setLastName(string lName){
    lName = lastName;
}
void Student::setSID(int studentID){
    studentID = SID;
}
void Student::setGrades(int aGrade){
    aGrade = grades;
}

void Student::printStudentInfo (){

    std::cout << getFirstName() << ", " << getLastName() << ", " << getSID() << ", " << getGrades() << std::endl;

}

float Student::avgGrade(){

    return 0;
}
int Student::getGradeCount(){

    return 0;

}

// 4 steps for compiling 
// Preprocesser, # are found and ran
// Complilation, 1 pass through code so top down running. Any c++ file could be compiled
// Link, Hooks and links the functions ect.
// Load, takes all things compiled and runs them
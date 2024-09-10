#ifndef STUDENT_H
#define STUDENT_H 

#include <string>
    using std::string;

class Student {

private: 
    string firstName;
    string lastName;
    int SID;
    int grades;


public: 
    Student();
    Student(string firstName, string lastName, int SID);
    Student(string firstName, string lastName, int SID, int grades);

    string getFirstName();
    string getLastName();
    int getSID();
    int getGrades();

    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setSID(int SID);
    void setGrades(int grades);

    void printStudentInfo();
    float avgGrade();


};


#endif 

#ifndef STUDENT_H
#define STUDENT_H 

#include <string>
    using std::string;

class Student {

private: 
    string firstName;
    string lastName;
    int SID;
    int grades[10];
    int gradeCount;


public: 
    // Student();
    Student(string firstName, string lastName, int SID);
    // Student(string firstName, string lastName, int SID, int grades);

    string getFirstName();
    string getLastName();
    int getSID();
    int getGrades();

// These are parameter and have no relation to the declared data under private:
    void setFirstName(string fName);
    void setLastName(string lName);
    void setSID(int studentID);
    void setGrades(int aGrade);

    void printStudentInfo();
    float avgGrade();
    int getGradeCount();

};


#endif 

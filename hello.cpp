#include <iostream> 
#include <string>
#include "hello.h"

void printName(){
    std::string myName = "Elianna Martin";

    std::cout << "Hello, my name is " << myName << "." << std::endl;

}

void printClass(){
    std::string myClass = "Object oriented programing";

    std::cout << "I am in the class " << myClass << "." << std::endl;

}

void printDate(){
    std::string theDate = "August 22nd";

    std::cout << "The date is " << theDate << "." << std::endl;

}
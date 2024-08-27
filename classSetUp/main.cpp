#include <iostream>
// #include "hello.cpp"
#include "class.h"
#include "class.cpp"

int main() {

    // std::cout << "Hello world" << std::endl;
    // printName();
    // printClass();
    // printDate();
    

    Area userArea1 (5, 10, 50);
    userArea1.findArea();
    userArea1.printUserPar();
    userArea1.printArea();
    userArea1.testAreaEquality();

    Area userArea2 (59, 77, 1048);
    userArea2.findArea();
    userArea2.printUserPar();
    userArea2.printArea();
    userArea2.testAreaEquality();

return 0;

};

#include <iostream>
#include "class.h"

int main() {

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

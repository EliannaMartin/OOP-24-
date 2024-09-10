#include "Iteration.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void forLoop(){

    for (int i=0; i <=10; i++){

        cout << i << ", " << endl;
    }

}

void whileLoop(){

}

void doWhileLoop(){
    int i = 0;
    int userNum;

    do {

        i++;
        cout << i << endl;

    } while(userNum != 10);

}

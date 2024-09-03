#include <iostream>

int main() {

    int userNum;
    int numArray[10];
    int i;
    

    for (i = 0; i < 10; i++){

        std::cout << "Please input a number: ";
        std::cin >> userNum;
        numArray[i] = userNum;
    }   

    for (i = 0; i < 10; i++){
        
        std::cout << numArray[i] << ", ";

    }

    return 0;
};
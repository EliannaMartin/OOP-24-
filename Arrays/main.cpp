#include <iostream> 
#include <array> 
    using std::array;

int main (){

// Try block

array<int, 5> myArray{1,2,3,4,5};

try {

    for (int counter = 0; counter <=5, counter++){
            std::cout << myArray[counter] << std::endl;

    }

} 

catch (){

}

    // 2D array

    // const unsigned int ROWS = 2;
    // const unsigned int COLS = 2;
    
    // array < array< char , COLS>, ROWS > myChars{'a', 'b', 'c', 'd'};

    // for (unsigned int i = 0; i < ROWS; ++i) {

    //     for (unsigned int j = 0; j < COLS; ++j) {
            
    //         std::cout << myChars[i][j] << std::endl;
    //     }
    // }


    return 0;
}
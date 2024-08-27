#include <iostream>
#include "class.h"

Area::Area(){

}

Area::Area(int userX, int userY, int area) : userX(userX), userY(userY), area(area) {


}

int Area::getUserX(){

    return userX;
}

int Area::getUserY(){

    return userY;
}

int Area::getArea(){

    return area;
}

void Area::setUserX(int userX){
    userX = userX;

}

void Area::setUserY(int userY){
    userY = userY;

}

void Area::setArea(int area){
    area = area;

}

int Area::findArea(){
    int area;

    area = getUserX() * getUserY();

    return area;
}

void Area::printUserPar(){

    std::cout << "Your X =" << getUserX() << ". Your Y =" << getUserY() << "." << std::endl;

}

void Area::printArea(){

    std::cout << "Your Area =" << findArea() << "." << std::endl;

}

void Area::testAreaEquality(){

    if (findArea() == getArea()) {

        std::cout << "You have the same given and found area!" << std::endl;

    }

    else {
    
    std::cout << "You do not have the same given and found area!" << std::endl;

    }

}

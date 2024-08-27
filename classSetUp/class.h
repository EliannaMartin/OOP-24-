#ifndef CLASS_H
#define CLASS_H

class Area {

private:

int userX;
int userY;
int area;


public: 

Area();
Area(int userX, int userY, int area);

int getUserX();
int getUserY();
int getArea();

void setUserX(int userX);
void setUserY(int userY);
void setArea(int area);


int findArea();
void printUserPar();
void printArea();
void testAreaEquality();

};

#endif

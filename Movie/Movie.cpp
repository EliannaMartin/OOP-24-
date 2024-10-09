#include <iostream>
#include "Movie.h"

Movie::Movie(){

}
Movie::Movie(string aTitle, string aDirector, int aRunTime, int aGenre) {
    this-> title = aTitle;
    this-> director = aDirector;
    this-> runTime = aRunTime;
    genreToString(aGenre);
}

string Movie::getTitle(){

    return title;
}
string Movie::getDirector(){

    return director;
}
int Movie::getRunTime(){

    return runTime;
}
string Movie::getGenre(){

    return genre;
}

void Movie::setTitle(string aTitle){
    aTitle = title;
}
void Movie::setDirector(string aDirector){
    aDirector = director;
}
void Movie::setRunTime(int aRunTime){
    aRunTime = runTime;
}
void Movie::setGenre(int aGenre){
    genreToString(aGenre);
}

int Movie::genreToString(int genre){
    
    string action = "Action";
    string comedy = "Comedy";
    string drama = "Drama"; 
    string horror = "Horror";
    string scifi = "Sci-Fi";
    string documentary = "Documentary";
    string animation = "Animation";
    string unkown = "Uknown";


    switch (genre) {
        case 1:
        this->genre = action;
        break;

        case 2: 
        this->genre = comedy;
        break;

        case 3: 
        this->genre = drama;
        break;

        case 4: 
        this->genre = horror;
        break;

        case 5: 
        this->genre = scifi;
        break;

        case 6: 
        this->genre = documentary;
        break;

        case 7: 
        this->genre = animation;
        break;

        default:
        this->genre = unkown;
    }

    return genre;
}

void Movie::printMovie(){

    std::cout << title << ", " << director << ", " << runTime << " hour long, " << genre << "." << std::endl;
}
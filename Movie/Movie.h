#ifndef MOVIE_H
#define MOVIE_H
#include <string>
    using std::string;


class Movie {

    private: 
    string title;
    string director;
    int runTime;
    string genre;

    public:
    Movie();
    Movie(string aTitle, string aDirector, int aRunTime, int aGenre);

    string getTitle();
    string getDirector();
    int getRunTime();
    string getGenre();

    void setTitle(string aTitle);
    void setDirector(string aDirector);
    void setRunTime(int aRunTime);
    void setGenre(int aGenre);

    int genreToString(int genre);
    void printMovie();
};
#endif
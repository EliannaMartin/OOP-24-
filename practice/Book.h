#ifndef BOOK_H
#define BOOK_H 

#include <string>
    using std::string;
#include <vector>
    using std::vector;

class Book {

    private: 
    string title;
    string author;
    int year;

    public: 
    Book();
    Book(string, string, int);

    string getTitle();
    string getAuthor();
    int getYear();

    void setTitle(string title);
    void setAuthor(string author);
    void setYear(int year);

    void listOfBooks(vector<string>);
};
#endif 
#ifndef BOOK_H
#define BOOK_H
#include<iostream>
using namespace std;
class Book {
private:
    int id;
    string title;
    string author;
    int price;
    int quatity;
    string publisher;
    int publishingYear;
    int bookShelve;
    string language;
public:
    Book();
    ~Book();
    Book createBook();
    Book update();
    Book Erase();
    void search();
    void display();
    
};
#endif
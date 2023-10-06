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
    friend istream &operator >> (istream &in, Book &b);
    friend ostream &operator << (ostream &os, const Book &b);
    Book update();
    Book erase();
    void search();

};
#endif
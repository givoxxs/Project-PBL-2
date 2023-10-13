#ifndef BOOK_H
#define BOOK_H
#include<iostream>
#include<vector>
using namespace std;
class Book {
private:
    int id;
    string title;
    string author;
    string genre;
    int price;
    int quantity;
    string publisher;
    int publishingYear;
    string language;
    int bookShelve;
public:
    Book(int id, string title, string author, 
    string genre, int price, int quantity, string publisher, 
    int publishingYear, string language, int bookShelve);
    ~Book();
    Book add();
    void display();
    Book &erase(int a);
    void search_id(int idd);// tim kiem id
    void search_title();// tim kiem ten
    void search_author();// tim kiem tac gia
    void search_language();// tim kiem ngon ngu
    void search_publisher();// tim kiem nha xuat ban
    void search_shelve();// tim kiem ke sach

};
#endif
#include "Book.h"
#include<iostream>
using namespace std;

Book::Book() {

}

Book::~Book() {

}

    istream &operator >> (istream &in, Book &b){
        cout<<"Hay them cac thong tin cua cuon sach moi: "<<endl;
        cout<<"Nhap ID: ";
        in>>b.id;
        cout<<"Nhap tieu de: ";
        in>>b.title;
        cout<<"Nhap ten tac gia: ";
        in>>b.author;
        cout<<"Nhap gia: ";
        in>>b.price;
    }

    Book Book::update() {

    }

    Book Book::erase() {

    }

    void Book::search() {

    }

    




#include "Book.h"
#include <iostream>
#include <string.h>
#include<vector>
using namespace std;
Book(int id, string title, string author, string genre, int price, int quantity, 
string publisher, int publishingYear, string language, int bookShelve):id(id),title(title),
Book Book::add()
{
  cout << "Nhap vao thong tin cua sach: " << endl;
  cout << "ID sach: ";
  cin >> id;
  getchar();
  cout << "Tieu de: ";
  getline(cin, title);
  cout << "Ten tac gia: ";
  getline(cin, author);
  cout << "The loai: ";
  getline(cin, genre);
  cout << "Gia ban: ";
  cin >> price;
  cout << "So luong: ";
  cin >> quantity;
  getchar();
  cout << "Nha xuat ban: ";
  getline(cin, publisher);
  cout << "Nam xuat ban: ";
  cin >> publishingYear;
  cout << "Ke sach: ";
  cin >> bookShelve;
  getchar();
  cout << "Ngon ngu: ";
  getline(cin, language);
  return *this;
}

void Book::display()
{
  cout << "Thong tin cua sach la: " << endl;
  cout << "ID: "<<id<<endl;
  cout <<"Tieu de: "<<title<<endl;
  cout<<"Tac gia: "<<author<<endl;
  cout<<"The loai: "<<genre<<endl;
  cout<<"Gia: "<<price<<endl;
  cout<<"So luong: "<<quantity<<endl;
  cout<<"Nha xuat bang: "<<publisher<<endl;
  cout<<"Nam xuat bang: "<<publishingYear<<endl;
  cout<<"Ngon ngu: "<<language<<endl;
  cout<<"Ke sach: "<<bookShelve<<endl;
}

Book &Book::erase(int a)
{
  this->quantity = this->quantity - a;
  return *this;
}

void Book::search_id(int idd) {
    if(this->id==idd) {
      display();
  }
}



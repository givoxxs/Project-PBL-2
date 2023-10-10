#include "Book.h"
#include <iostream>
#include <string.h>
#include<vector>
using namespace std;

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
  cout << "ID: " << id << "    Tieu de: " << title << endl;
  cout << "Tac gia: " << author << "The loai: " << genre << "   Gia: " << price << "    So luong: " << quantity << endl;
  cout << "Nha xuat ban: " << publisher << " Nam xuat ban: " << publishingYear << endl;
  cout << "Ke sach: " << bookShelve << "   Ngon ngu: " << language << endl;
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
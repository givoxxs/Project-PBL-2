<<<<<<< HEAD
#include "Book.h"
#include <iostream>
#include<vector>
using namespace std;

int main() {
    std::vector<Book> a(10);
    a[1].add();
    a[2].add();
    a[3].add();
    a[4].add();
    a[5].add();
    a[6].add();
    a[7].add();
    int temp;
    cout<<"nhap id can tim kiem: ";
    cin>>temp;
    for(int i=0;i<10;i++) {
        a[i].search_id(temp);
    }
     return 0;
}


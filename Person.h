// Person.h khai báo
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person {
    protected:
        int Id;
        string name, phoneNumber;
    public: 
        Person();
        Person(int ID, string name, string phoneNumber);
        ~Person();

        void setID(int id);
        void setName(const string& name);
        void setPhoneNumber(const string& phoneNumber);

        Person Add(const Person& other);
        void Display();
        Person Search(const string& query);
 }
#endif


// Person.h khai báo
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person {
    int id;
    string name, phoneNumber;

    public: 
        Person();
        ~Person();

        Person Add(const Person& other);
        Person Display();
        void Search();
    }
#endif


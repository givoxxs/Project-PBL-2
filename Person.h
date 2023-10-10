// Person.h khai báo
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
    protected:
        int Id;
        string name, phoneNumber;
        static vector<Person*> personList;
    public: 
        Person(int Id,string name, string phoneNumber);
        virtual ~Person();

        int getId() const;
        string getName() const;
        string getPhoneNumber() const;

        virtual void Display() const;
        virtual void Search(std::string keyword) const;

        static void Add(Person* person);
        static void DisplayAll();
        static Person* FindByID(int id);
        static void SearchByName(std::string name);      
};
#endif


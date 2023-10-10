#include "Person.h"
#include <iostream>
using namespace std;

vector<Person*> Person::personList;
//Hàm dựng
Person::Person(int Id, string name, string phoneNumber)
    : Id(Id), name(name), phoneNumber(phoneNumber) {
    Add(this);
}
//Hàm hủy
Person::~Person() {}
// Get ID
int Person::getId() const {
    return Id;
}
// Get Name
string Person::getName() const {
    return name;
}
// Get Phone Number
string Person::getPhoneNumber() const {
    return phoneNumber;
}
// Display Person
void Person::Display() const {
    cout << "Id: " << Id << endl;
    cout << "Name: " << name << endl;
    cout << "Phone Number: " << phoneNumber << endl;
}
// Search follow keyword
void Person::Search(string keyword) const {
    if (name.find(keyword) != string::npos || phoneNumber.find(keyword) != string::npos) {
        Display();
    }
}

void Person::Add(Person* person) {
    personList.push_back(person);
}

void Person::DisplayAll() {
    for (const auto& person : personList) {
        person->Display();
        cout << "-------------------------" << endl;
    }
}

Person* Person::FindByID(int id) {
    for (const auto& person : personList) {
        if (person->getId() == id) {
            return person;
        }
    }
    return nullptr;
}

void Person::SearchByName(string name) {
    for (const auto& person : personList) {
        if (person->getName() == name) {
            person->Display();
            cout << "-------------------------" << endl;
        }
    }
}

#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() {
    Id = 0;
    name = "";
    phoneNumber = "";
}
Person::~Person() {}
Person Person::Add(const Person& other) {}
Person Person::Display() {}
void Person::Search() {}
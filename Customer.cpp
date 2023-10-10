#include "Customer.h"
#include <iostream>

using namespace std;

Customer::Customer(int id, string name, string phoneNumber)
    : Person(id, name, phoneNumber) {}

Customer::~Customer() {}

void Customer::OrderBook() {
    // Implement ordering logic here
    cout << "Customer " << getName() << " is ordering a book." << endl;
}

// Class Customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"
#include <iostream>

using namespace std;

class Customer : public Person {
public:
    Customer(int id, std::string name, std::string phoneNumber);
    virtual ~Customer();

    void OrderBook();

private:
    // Add customer-specific properties/methods here
};

#endif

#include "Person.h"
#include "Customer.h"

#include <iostream>
using namespace std;

int main()
{
    /* code */
    // cout << "hello world";
    // return 0;
    // Create some people
    Person person1(1, "John Doe", "123-456-7890");
    Person person2(2, "Alice Smith", "987-654-3210");
    Person person3(3, "Bob Johnson", "555-555-5555");

    // Create some customers
    Customer customer1(101, "Customer A", "111-111-1111");
    Customer customer2(102, "Customer B", "222-222-2222");

    // Display all people
    cout << "All People:" << endl;
    Person::DisplayAll();
    cout << "-------------------------" << endl;

    // Search for people by name
    cout << "People with name 'Alice':" << endl;
    Person::SearchByName("Alice");
    cout << "-------------------------" << endl;

    // Search for people by phone number
    cout << "People with phone number '555-555-5555':" << endl;
    person3.Search("555-555-5555");
    cout << "-------------------------" << endl;

    // Order books for customers
    customer1.OrderBook();
    customer2.OrderBook();

    return 0;
}

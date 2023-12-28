#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>

class Customer {
private:
    std::string name;
    int customerId;

public:
    Customer(const std::string& name, int customerId);

    void displayInfo() const;
};

#endif // CUSTOMER_H

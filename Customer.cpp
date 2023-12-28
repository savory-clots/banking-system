#include "Customer.h"

Customer::Customer(const std::string& name, int customerId)
    : name(name), customerId(customerId) {}

void Customer::displayInfo() const {
    std::cout << "Customer ID: " << customerId << "\n";
    std::cout << "Name: " << name << "\n";
}

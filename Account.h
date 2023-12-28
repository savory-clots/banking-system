#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Customer.h"

class Account {
private:
    Customer customer;
    int accountId;
    double balance;

public:
    Account(const Customer& customer, int accountId, double balance);

    void deposit(double amount);
    void withdraw(double amount);
    void displayInfo() const;
};

#endif // ACCOUNT_H

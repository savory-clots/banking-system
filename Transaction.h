#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Account.h"
#include <string>

class Transaction {
private:
    Account account;
    std::string type;
    double amount;

public:
    Transaction(const Account& account, const std::string& type, double amount);

    void execute();
    void displayInfo() const;
};

#endif // TRANSACTION_H

#include "Transaction.h"

Transaction::Transaction(const Account& account, const std::string& type, double amount)
    : account(account), type(type), amount(amount) {}

void Transaction::execute() {
    if (type == "Deposit") {
        account.deposit(amount);
    } else if (type == "Withdrawal") {
        account.withdraw(amount);
    }
}

void Transaction::displayInfo() const {
    std::cout << "Transaction Type: " << type << "\n";
    account.displayInfo();
    std::cout << "Amount: $" << amount << "\n";
}

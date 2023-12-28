#include "Account.h"

Account::Account(const Customer& customer, int accountId, double balance)
    : customer(customer), accountId(accountId), balance(balance) {}

void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Deposit successful. New balance: $" << balance << "\n";
    } else {
        std::cout << "Invalid deposit amount.\n";
    }
}

void Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << "Withdrawal successful. New balance: $" << balance << "\n";
    } else {
        std::cout << "Invalid withdrawal amount or insufficient funds.\n";
    }
}

void Account::displayInfo() const {
    std::cout << "Account ID: " << accountId << "\n";
    customer.displayInfo();
    std::cout << "Balance: $" << balance << "\n";
}

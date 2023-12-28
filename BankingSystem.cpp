#include "Customer.h"
#include "Account.h"
#include "Transaction.h"
#include <iostream>

int main() {
    // Create a customer
    Customer customer("Alice", 1);

    // Create an account for the customer
    Account account(customer, 101, 1000.0);

    // Perform transactions
    Transaction depositTransaction(account, "Deposit", 500.0);
    depositTransaction.execute();

    Transaction withdrawalTransaction(account, "Withdrawal", 200.0);
    withdrawalTransaction.execute();

    // Display account information
    std::cout << "\nAccount Information:\n";
    account.displayInfo();

    // Display transaction information
    std::cout << "\nTransaction Information:\n";
    depositTransaction.displayInfo();
    withdrawalTransaction.displayInfo();

    return 0;
}

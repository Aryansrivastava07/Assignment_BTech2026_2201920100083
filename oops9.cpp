// Implement a class Account with private members balance and accountNumber. Provide public methods to deposit, withdraw, and check the balance.
//  Ensure that withdrawals cannot exceed the balance.
#include <iostream>

class Account {
private:
    double balance;
    int accountNumber;

public:
    // Constructor
    Account(int accNum, double initialBalance = 0.0)
        : accountNumber(accNum), balance(initialBalance) {}

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: $" << amount << std::endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient funds." << std::endl;
        } else if (amount > 0) {
            balance -= amount;
            std::cout << "Withdrawn: $" << amount << std::endl;
        }
    }

    // Check balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    Account myAccount(123456, 500.0);

    myAccount.deposit(200.0);
    myAccount.withdraw(100.0);
    myAccount.withdraw(700.0);

    std::cout << "Current Balance: $" << myAccount.getBalance() << std::endl;

    return 0;
}

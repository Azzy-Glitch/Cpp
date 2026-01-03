//A system aotomatically generated closes account when the program ends
#include <iostream>
using namespace std;

// Base class
class BankAccount
{
protected:
    string accHolder;
    double balance;   

public:
    BankAccount() {}
    BankAccount(string n, double b)
    {
        accHolder = n;
        balance = b;
        cout << "BankAccount constructor called" << endl;
    }
// function to deposit amount
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }

    ~BankAccount()
    {
        cout << "Account of " << accHolder << " with balance " 
        << balance << " is now closed." << endl;
    }

};

int main(){
    BankAccount account1("Alice", 1000.0);
    account1.deposit(500.0);

    BankAccount account2("Bob", 1500.0);
    account2.deposit(300.0);

    return 0;

}
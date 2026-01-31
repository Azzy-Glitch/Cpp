#include <iostream>
using namespace std;

class ATM
{
private:
    int accountNumber;
    float balance;

public:
    ATM(int acc)
    {
        accountNumber = acc;
        balance = 0;
    }

    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount Deposited: Rs " << amount << endl;
        }
        else
        {
            cout << "Invalid amount!" << endl;
        }
    }

    void withdraw(float amount)
    {
        if (amount > 2000)
        {
            cout << "You can withdraw only Rs 2000 per transaction." << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient Balance!" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Amount Withdrawn: Rs " << amount << endl;
        }
    }

    void displayBalance()
    {
        cout << "Current Balance: Rs " << balance << endl;
    }
};

int main()
{
    ATM myATM(123456);

    myATM.deposit(1000);
    myATM.displayBalance();
    myATM.withdraw(5000);
    myATM.displayBalance();

    return 0;
}
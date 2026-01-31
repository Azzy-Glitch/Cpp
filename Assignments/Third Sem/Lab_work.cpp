#include <iostream>
using namespace std;

class ATM
{
private:
    int accountNumber;
    float balance;

public:
    // Constructor
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
    int accNum, choice;
    float amount;

    cout << "Enter Account Number: ";
    cin >> accNum;

    ATM myATM(accNum);

    do
    {
        cout << "\nATM Menu\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Balance\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Amount to Deposit: ";
            cin >> amount;
            myATM.deposit(amount);
            break;

        case 2:
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;
            myATM.withdraw(amount);
            break;

        case 3:
            myATM.displayBalance();
            break;

        case 4:
            cout << "Thank you for using ATM!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}

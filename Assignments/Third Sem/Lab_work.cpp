// Write a cpp program which acts like a basic AtM
// it must have the following Functions
// Deposit Amount
// WithDraw Allow Rs 2000 Per Transaction
// Display Amount

#include <iostream>
using namespace std;

class ATM
{
    float balance;

public:
    ATM()
    {
        balance = 0;
    }

    void deposit(float amount)
    {
        balance += amount;
        cout << "Deposited: Rs " << amount << endl;
    }

    void withdraw(float amount)
    {
        if (amount > 2000)
        {
            cout << "Withdrawal limit exceeded. You can withdraw up to Rs 2000 per transaction." << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance." << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrew: Rs " << amount << endl;
        }
    }
    void displayBalance()
    {
        cout << "Current Balance: Rs " << balance << endl;
    }
};
int main()
{
    ATM myATM;
    int choice;
    float amount;

    do
    {
        cout << "\nATM Menu:\n";
        cout << "1. Deposit Amount\n";
        cout << "2. Withdraw Amount\n";
        cout << "3. Display Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: Rs ";
            cin >> amount;
            myATM.deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: Rs ";
            cin >> amount;
            myATM.withdraw(amount);
            break;
        case 3:
            myATM.displayBalance();
            break;
        case 4:
            cout << "Exiting ATM. Thank you!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
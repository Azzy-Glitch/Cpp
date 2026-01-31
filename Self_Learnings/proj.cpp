// Write a cpp program which acts like a basic AtM
// it must have the following Functions
// Deposit Amount
// WithDraw Allow Rs 2000 Per Transaction
// Display Amount

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class ATM
{
    vector<float> balance;
    vector<int> AccountNumber;
    vector<string> AccHolder;

public:
    ATM()
    {
        balance = vector<float>();
        AccHolder = vector<string>();
        AccountNumber = vector<int>();
    }

    void setAccountDetails(int accNum, string accHolder)
    {
        AccountNumber.push_back(accNum);
        AccHolder.push_back(accHolder);
        balance.push_back(0);
    }

    void deposit(int accNum, float amount)
    {
        vector<int>::iterator it = find(AccountNumber.begin(), AccountNumber.end(), accNum);
        if (it != AccountNumber.end())
        {
            int index = std::distance(AccountNumber.begin(), it);
            balance[index] += amount;
            cout << "Deposited: Rs " << amount << " to account " << accNum << endl;
        }
        else
        {
            cout << "Account not found." << endl;
        }
    }

    void withdraw(int accNum, float amount)
    {
        auto it = find(AccountNumber.begin(), AccountNumber.end(), accNum);
        if (it != AccountNumber.end())
        {
            int index = distance(AccountNumber.begin(), it);
            if (amount > 2000)
            {
                cout << "Withdrawal limit exceeded. You can withdraw up to Rs 2000 per transaction." << endl;
            }
            else if (amount > balance[index])
            {
                cout << "Insufficient balance." << endl;
            }
            else
            {
                balance[index] -= amount;
                cout << "Withdrew: Rs " << amount << " from account " << accNum << endl;
            }
        }
        else
        {
            cout << "Account not found." << endl;
        }
    }

    void displayBalance(int accNum)
    {
        auto it = find(AccountNumber.begin(), AccountNumber.end(), accNum);
        if (it != AccountNumber.end())
        {
            int index = distance(AccountNumber.begin(), it);
            cout << "Current Balance for account " << accNum << ": Rs " << balance[index] << endl;
        }
        else
        {
            cout << "Account not found." << endl;
        }
    }
};

int main()
{
    ATM myATM;
    int choice;
    float amount;
    int accNum;
    string accHolder;
    int NumofAccounts;
    cout << "Enter number of accounts: ";
    cin >> NumofAccounts;
    for (int i = 0; i < NumofAccounts; i++)
    {
        cout << "Enter Account Number: ";
        cin >> accNum;
        cout << "Enter Account Holder Name: ";
        cin.ignore();
        getline(cin, accHolder);
        myATM.setAccountDetails(accNum, accHolder);
    }

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
            cout << "Enter Account Number: ";
            cin >> accNum;
            cout << "Enter amount to deposit: Rs ";
            cin >> amount;
            myATM.deposit(accNum, amount);
            break;
        case 2:
            cout << "Enter Account Number: ";
            cin >> accNum;
            cout << "Enter amount to withdraw: Rs ";
            cin >> amount;
            myATM.withdraw(accNum, amount);
            break;
        case 3:
            cout << "Enter Account Number: ";
            cin >> accNum;
            myATM.displayBalance(accNum);
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
#include <iostream>

using namespace std;

class Person
{
    string pname;
    string pgender;
    string pHeight;
    string car;
    string house;
    void get_data();
    void display_data();

public:
    Person()
    {
        get_data();
        display_data();
    }
};

void Person ::get_data()
{
    cout << "Enter Person Name ";
    cin >> pname;
    cout << "Enter Gender ";
    cin >> pgender;
    cout << "Enter Height ";
    cin >> pHeight;
    cout << "Enter Car Model: ";
    cin >> car;
    cout << "Enter House Address: ";
    cin >> house;
}

void Person ::display_data()
{
    cout << "Person Name " << pname << endl;
    cout << "Gender " << pgender << endl;
    cout << "Height " << pHeight << endl;
    cout << "Car Model: " << car << endl;
    cout << "House Address: " << house << endl;
}

int main()
{
    Person p;
    return 0;
}
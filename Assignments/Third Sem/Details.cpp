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
    void get_car();
    void get_house();
    void display_car();
    void display_house();

public:
    Person()
    {
        get_data();
        get_car();
        get_house();
        display_data();
        display_car();
        display_house();
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
}

void Person ::display_data()
{
    cout << "Person Name " << pname << endl;
    cout << "Gender " << pgender << endl;
    cout << "Height " << pHeight << endl;
}

void Person ::get_car()
{
    cout << "Enter Car Model: ";
    cin >> car;
}

void Person ::get_house()
{
    cout << "Enter House Address: ";
    cin >> house;
}

void Person ::display_car()
{
    cout << "Car Model: " << car;
}

void Person ::display_house()
{
    cout << "House Address: " << house;
}

int main()
{
    Person p;
    return 0;
}
#include <iostream>

using namespace std;

class Person
{
    string pname;
    string pgender;
    string pHeight;
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
}

void Person ::display_data()
{
    cout << "Enter Person Name " << pname;
    cout << "Gender " << pgender;
    cout << "Height " << pHeight;
}

int main()
{
    Person p;
    return 0;
}
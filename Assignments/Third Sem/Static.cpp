#include <iostream>
using namespace std;

class Person
{
    static string pname;
    static string pgender;
    static string pHeight;
    static string car;
    static string house;

public:
    static void get_data()
    {
        cout << "Enter Person Name: ";
        cin >> pname;
        cout << "Enter Gender: ";
        cin >> pgender;
        cout << "Enter Height: ";
        cin >> pHeight;
        cout << "Enter Car Model: ";
        cin >> car;
        cout << "Enter House Address: ";
        cin >> house;
    }

    static void display_data()
    {
        cout << "\nPerson Name: " << pname << endl;
        cout << "Gender: " << pgender << endl;
        cout << "Height: " << pHeight << endl;
        cout << "Car Model: " << car << endl;
        cout << "House Address: " << house << endl;
    }
};

// Static member definitions
string Person::pname = "";
string Person::pgender = "";
string Person::pHeight = "";
string Person::car = "";
string Person::house = "";

int main()
{
    Person::get_data();
    Person::display_data();
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    string name;
    int reg;
    string email;

public:
    student() {}
    student(string n, int r, string e)
    {
        name = n;
        reg = r;
        email = e;
    }
    void get_std_info()
    {
        cout << "Enter student name " << endl;
        cin >> name;
        cout << "Enter registration number " << endl;
        cin >> reg;
        cout << "Enter email " << endl;
        cin >> email;
    }

    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Registration number:" << reg << endl;
        cout << "Email:" << email << endl;
        cout << endl;
    }
};

int main()
{
    student s;
    s.get_std_info();
    s.display();
    return 0;
}
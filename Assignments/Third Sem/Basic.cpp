#include <iostream>
#include <fstream>
using namespace std;

class student
{
public:
    string std_name;
    string std_Reg;
    string std_email;
    string std_prog;
    
    void get_std_info();
    
    student(string n, string r, string e, string p)
    {
        std_name = n;
        std_Reg = r;
        std_email = e;
        std_prog = p;
    }
    
    student()
    {
        get_std_info();
        display_std_info();
    }

    void display_std_info()
    {
        cout << "Name: " << std_name << endl;
        cout << "Registration Number: " << std_Reg << endl;
        cout << "Email: " << std_email << endl;
        cout << endl;
    }

};

void student::get_std_info()
{
    // open file in append mode (so previous data doesn't get erased)
    fstream std_data("data.txt", ios::app);
    
    if (!std_data) {
        cout << "File not found!" << endl;
        return;
    }

    cout << "Enter Name: ";
    getline(cin, std_name);

    cout << "Enter Registration Number: ";
    getline(cin, std_Reg);

    cout << "Enter Email: ";
    getline(cin, std_email);

    cout << "Enter Program: ";
    getline(cin, std_prog);

    // Write to file
    std_data << "Name: " << std_name << endl;
    std_data << "Registration: " << std_Reg << endl;
    std_data << "Email: " << std_email << endl;
    std_data << "Program: " << std_prog << endl;
    std_data << "-----------------------------" << endl;

    std_data.close();

    cout << "\nData saved to file successfully!\n";
}

int main()
{
    student s[5];
    return 0;
}

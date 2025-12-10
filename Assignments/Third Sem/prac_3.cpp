#include <iostream>
using namespace std;
class teacher
{
    int no;
    string name;
    string qualification;

public:
    void set_no(int e)
    {
        no = e;
    }

    void set_name(string n)
    {
        name = n;
    }

    void set_qualification(string q)
    {
        qualification = q;
    }

    int get_no()
    {
        return no;
    }

    string get_name()
    {
        return name;
    }

    string get_qualification()
    {
        return qualification;
    }
};

int main(){
    teacher t;
    int no;
    string name, qualification;

    cout << "Enter teacher number: ";
    cin >> no;
    t.set_no(no);

    cout << "Enter teacher name: ";
    cin >> name;
    t.set_name(name);

    cout << "Enter teacher qualification: ";
    cin >> qualification;
    t.set_qualification(qualification);

    cout << "\nTeacher Details:\n";
    cout << "Number: " << t.get_no() << endl;
    cout << "Name: " << t.get_name() << endl;
    cout << "Qualification: " << t.get_qualification() << endl;

    return 0;
}
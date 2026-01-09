#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    static int personCount;

    Person() {
        name = "Unknown";
        personCount++;
    }

    Person(string n) {
        name = n;
        personCount++;
    }

    ~Person() {
        cout << "Person object destroyed\n";
    }
};

int Person::personCount = 0;

class Student : public Person {
private:
    int rollNo;

public:
    Student(string n) : Person(n) { 
        rollNo = 0;
    }

    Student(string n, int r) : Person(n) {
        rollNo = r;
    }

    friend void display(Student s);
};

// Friend function definition
void display(Student s) {
    cout << "Name: " << s.name << endl;
    cout << "Roll No: " << s.rollNo << endl;
}

int main() {
    Student s1("Ali", 101);
    Student s2("Ahmed");

    display(s1);
    display(s2);

    cout << "Total Persons Created: " << Person::personCount << endl;

    return 0;
}

#include <iostream>
using namespace std;

// Base class
class Person
{
protected:
    string name;
    int age;

public:
    Person() {}

    Person(string n, int a)
    {
        name = n;
        age = a;
        cout << "Person constructor called" << endl;
    }

    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    ~Person()
    {
        cout << "Person object destroyed" << endl;
    }
};

class Student : public Person
{
private:
    float gpa;

public:

    Student() {}

    Student(string n, int a, float g): Person(n, a)
    {
        // name = n;
        // age = a;
        gpa = g;
        cout << "Student constructor called" << endl;
    }

    void setGPA(float g)
    {
        gpa = g;
    }

    float getGPA()
    {
        return gpa;
    }

    friend void displayStudentInfo(Student s);

    ~Student()
    {
        cout << "Student object destroyed" << endl;
    }
};

void displayStudentInfo(Student s)
{
    cout << "\n--- Student Information (Friend Function) ---" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "GPA: " << s.gpa << endl;
}

int main()
{
    Student s1;

    s1.setName("Ahmed");
    s1.setAge(21);
    s1.setGPA(3.8);

    cout << "\n--- Student Information (Getters) ---" << endl;
    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;
    cout << "GPA: " << s1.getGPA() << endl;

    displayStudentInfo(s1);

    return 0;
}

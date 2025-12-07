#include <iostream>
using namespace std;
class student
{
public:
    int a;
};

int main()
{
    student s;
    cout << "Enter any number ";
    cin >> s.a;
    cout << "The number is " << s.a;
    return 0;
}
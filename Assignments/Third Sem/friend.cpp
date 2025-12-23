#include <iostream>

using namespace std;

class prac
{
    int a = 10;
    int b = 20;

public:
    friend int add(prac a);
};

int add(prac a)
{
    return a.a + a.b;
}

int main()
{
    prac obj;
    cout << "The sum of a and b is: " << add(obj) << endl;
    return 0;
}
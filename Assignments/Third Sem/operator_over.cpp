#include <iostream>
using namespace std;

class Number
{
public:
    int value = 10;
    int num = 20;

    int operator+(Number obj)
    {
        return obj.num + obj.value;
    }
};

int main()
{
    Number obj1, obj2;
    int result = obj1 + obj2;            
    cout << "Result: " << result << endl;
    return 0;
}

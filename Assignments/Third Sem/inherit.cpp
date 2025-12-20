#include<iostream>

using namespace std;
class a
{
    int x;
public:
    void set_x(int i)
    {
        x = i;
    }   
    int get_x()
    {
        return x;
    }
};

class b : public a
{
    int y;
public:

    void set_y(int j)
    {
        y = j;
    }   
    int get_y()
    {
        return y;
    }
};

int main(){
    b obj;
    int val1, val2;

    cout << "Enter value for x: ";
    cin >> val1;
    obj.set_x(val1);

    cout << "Enter value for y: ";
    cin >> val2;
    obj.set_y(val2);

    cout << "\nValues are:\n";
    cout << "x: " << obj.get_x() << endl;
    cout << "y: " << obj.get_y() << endl;
return 0;
}
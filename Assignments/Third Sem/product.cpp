#include <iostream>

using namespace std;

class Product
{
    string pname;
    string pcolor;
    string psize;
    double price;
    void get_data();
    void display_data();

public:
    Product()
    {
        get_data();
        display_data();
    }
};

void Product :: get_data()
{
    cout << "Enter Product Name ";
    cin >> pname;
    cout << "Enter Product Color ";
    cin >> pcolor;
    cout << "Enter Product Size ";
    cin >> psize;
    cout << "Enter Product price ";
    cin >> price;
}

void Product :: display_data()
{
    cout << "Enter Product Name " << pname;
    cout << "Enter Product Color " << pcolor;
    cout << "Enter Product Size " << psize;
    cout << "Enter Product price " << price;
}

int main()
{
    Product p;
    return 0;
}
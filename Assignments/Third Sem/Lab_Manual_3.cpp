
#include <iostream>
using namespace std;    
class Product {
    string name;
    double price;
    string category;
public:

    Product(string n, double p, string c) {
        name = n;
        price = p;
        category = c;
    }

    Product(const Product &p) {
        name = p.name;
        price = p.price;
        category = p.category;
    }

    void display() {
        cout << "Product Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Category: " << category << endl;
    }
};
int main() {

    Product prod1("Laptop", 999.99, "Electronics");

    Product prod2 = prod1;

    cout << "Product 1 Details:" << endl;
    prod1.display();
    cout << endl;

    cout << "Product 2 Details (Copied):" << endl;
    prod2.display();

    return 0;
}



#include <iostream>
using namespace std;

class Calc {
public:
    int x;

    // Constructor
    Calc(int v = 0) {
        x = v;
    }

    // + operator
    Calc operator + (Calc c) {
        return Calc(x + c.x);
    }

    // - operator
    Calc operator - (Calc c) {
        return Calc(x - c.x);
    }

    // * operator
    Calc operator * (Calc c) {
        return Calc(x * c.x);
    }

    // / operator
    Calc operator / (Calc c) {
        return Calc(x / c.x);
    }

    void show() {
        cout << x << endl;
    }
};

int main() {
    Calc a(10);
    Calc b(5);

    Calc add = a + b;
    Calc sub = a - b;
    Calc mul = a * b;
    Calc div = a / b;

    cout << "Addition: ";
    add.show();

    cout << "Subtraction: ";
    sub.show();

    cout << "Multiplication: ";
    mul.show();

    cout << "Division: ";
    div.show();

    return 0;
}

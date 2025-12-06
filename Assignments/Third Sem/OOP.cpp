#include<iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;
    public:
        // Constructor
        Complex(float r = 0, float i = 0) : real(r), imag(i) {}

        // Overloading + operator
        Complex operator + (const Complex& obj) {
            return Complex(real + obj.real, imag + obj.imag);
        }

        // Overloading - operator
        Complex operator - (const Complex& obj) {
            return Complex(real - obj.real, imag - obj.imag);
        }

        // Overloading * operator
        Complex operator * (const Complex& obj) {
            return Complex(real * obj.real - imag * obj.imag,
                           real * obj.imag + imag * obj.real);
        }

        // Function to display complex number
        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main(){
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    Complex c5 = c1 * c2;

    cout << "c1 + c2 = ";
    c3.display();

    cout << "c1 - c2 = ";
    c4.display();

    cout << "c1 * c2 = ";
    c5.display();

    return 0;

}
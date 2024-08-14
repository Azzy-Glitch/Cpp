#include <iostream>
#include <cmath>

// Utility function to get two numbers from the user
void getNumbers(double &num1, double &num2)
{
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
}

// Utility function to display results
void displayResults(const std::string &operation, double result)
{
    std::cout << operation << ": " << result << std::endl;
}

class SimpleCalculator
{
public:
    void calculate()
    {
        double num1, num2;
        getNumbers(num1, num2);
        displayResults("Addition", num1 + num2);
        displayResults("Subtraction", num1 - num2);
        displayResults("Multiplication", num1 * num2);
        if (num2 != 0)
        {
            displayResults("Division", num1 / num2);
        }
        else
        {
            std::cout << "Error: Division by zero" << std::endl;
        }
    }
};

class ScientificCalculator
{
public:
    void calculate()
    {
        double num1, num2;
        getNumbers(num1, num2);
        displayResults("Power", pow(num1, num2));
        displayResults("Square Root", sqrt(num1));
        displayResults("Logarithm", log(num1));
        displayResults("Exponential", exp(num1));
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void calculate()
    {
        SimpleCalculator::calculate();
        ScientificCalculator::calculate();
    }
};

int main()
{
    HybridCalculator calculator;
    calculator.calculate();
    return 0;
}
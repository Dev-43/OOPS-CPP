#include<iostream>

using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0; // Or some other error indicator
        }
        return a / b;
    }
};

int main() 
{
    Calculator calc; // Create an instance of the Calculator class
    int ch;
    double a, b, result;
    cout << "Welcome to simple Arithmetic calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;

    do {
        cout << "Enter your choice: ";
        cin >> ch;

        if (ch >= 1 && ch <= 4) {
            cout << "Enter two numbers:" << endl;
            cin >> a >> b;
        }

        switch (ch) {
            case 1:
                result = calc.add(a, b);
                cout << a << " + " << b << " = " << result << endl;
                break;
            case 2:
                result = calc.subtract(a, b);
                cout << a << " - " << b << " = " << result << endl;
                break;
            case 3:
                result = calc.multiply(a, b);
                cout << a << " * " << b << " = " << result << endl;
                break;
            case 4:
                // Error handling is now inside the divide method
                if (b != 0) {
                    result = calc.divide(a, b);
                    cout << a << " / " << b << " = " << result << endl;
                } else {
                    calc.divide(a, b); 
                }
                break;
            case 5:
                cout << "Exiting the calculator." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (ch != 5);
    
    return 0;
}


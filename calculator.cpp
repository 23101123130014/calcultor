#include <iostream>
using namespace std;

// Function prototypes
void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);

int main() {
    double num1, num2;
    char operation;
    bool keepGoing = true;

    while (keepGoing) {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;
        cout << "Enter second number: ";
        cin >> num2;

        switch (operation) {
            case '+':
                add(num1, num2);
                break;
            case '-':
                subtract(num1, num2);
                break;
            case '*':
                multiply(num1, num2);
                break;
            case '/':
                if (num2 != 0) {
                    divide(num1, num2);
                } else {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operator. Please try again." << endl;
        }

        char choice;
        cout << "Do you want to perform another operation? (y/n): ";
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            keepGoing = false;
        }
    }
    
    return 0;
}

void add(double a, double b) {
    cout << "Result: " << a + b << endl;
}

void subtract(double a, double b) {
    cout << "Result: " << a - b << endl;
}

void multiply(double a, double b) {
    cout << "Result: " << a * b << endl;
}

void divide(double a, double b) {
    cout << "Result: " << a / b << endl;
}

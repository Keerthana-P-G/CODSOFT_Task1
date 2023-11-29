//    TASK 2:     
//    SIMPLE CALCULATOR 


#include <iostream>
using namespace std;

int main() 
{
    double operand1, operand2;
    char operatorSymbol;

    cout << "Enter the First Operand: ";
    cin >> operand1;
    cout << "Enter the Second Operand: ";
    cin >> operand2;

    cout << "Choose an Operator (+, -, *, /): ";
    cin >> operatorSymbol;

    switch (operatorSymbol) {
        case '+':
            cout << "Result: " << operand1 + operand2 << endl;
            break;
        case '-':
            cout << "Result: " << operand1 - operand2 << endl;
            break;
        case '*':
            cout << "Result: " << operand1 * operand2 << endl;
            break;
        case '/':
            if (operand2 == 0) 
                cout << "Error: Division by zero is not allowed." << endl;
            else 
                cout << "Result: " << operand1 / operand2 << endl;
            
            break;
        default:
            cout << "Operator does not exist. Please choose a valid operator." << endl;
    }

    return 0;
}

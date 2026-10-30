// Begineer Calculator App
// This Calculator will ask the user for two numbers and a operation

#include <iostream>
using namespace std;

int main() {

    double number1;
    double number2;
    int choice; 
    double result;

    cout << "Enter first number" << endl;
    cin >> number1;


    cout << "Enter second number" << endl;
    cin >> number2;


    cout <<"Choose an operation:" << endl;
    cout <<"1. Addition (+)" << endl;
    cout <<"2. Subtraction (-)" << endl;
    cout <<"3. Multiplication (*)" << endl;
    cout <<"4. Division (/)" << endl;
    

    cin >> choice;

    switch (choice) {
        case 1:
        // Addition

        result = number1 + number2;
        cout << result;
        break;

        case 2:
        // Subtraction

        result = number1 - number2;
        cout << result;
        break;

        case 3:
        // Multiplication

        result = number1 * number2;
        cout << result;
        break;

        case 4:
        // Divison

        result = number1 / number2;
        cout << result;
        break;

        default:
        // Displays an invaild chice message

        cout << "Invaild choice. Please select 1-4.";
        break;
    }


    return 0;
}
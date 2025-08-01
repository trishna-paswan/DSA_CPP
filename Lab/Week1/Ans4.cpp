/*
Problem Statement: You're creating a basic calculator for a billing system. It should perform addition, subtraction, multiplication, or division based on user choice. 
Task: 
Write a C++ program to: 
•	Take two numbers and an arithmetic operator as input 
•	Perform the selected operation using switch-case 
Input Format: 
•	Two floating-point numbers 
•	A character denoting the operation (+, -, *, /) 
Output Format: 
•	“Result: <calculated value>” 
•	Or Error: Division by zero or Invalid operator 
*/
#include <iostream>
using namespace std;

int main(){
    float num1;
    cout << "Enter the first number: ";
    cin >> num1;
    float num2;
    cout << "Enter the second number: ";
    cin >> num2;
    char operation;
    cout << "Enter the Operation (+, -, *, /): ";
    cin >> operation;
    if (operation == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } else if (operation == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } else if (operation == '*') {
        cout << "Result: " << num1 * num2 << endl;
    } else if (operation == '/') {
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    } else {
        cout << "Error: Invalid operation." << endl;
    }
}

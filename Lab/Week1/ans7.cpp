/*
Question 3: 
 
Problem Statement: You are developing a basic feature for a bank's software system. A customer wants to deposit a certain amount into their account. Your program should take the customer's details and the deposit amount as input, and then show the updated balance. 
Task: 
•	Create a class BankAccount with data members for account number, name, and balance 
•	Use member functions to: 
•	Accept account details 
•	Accept a user-defined deposit amount 
•	Update and display the new balance 
Input Format: 
Account number (integer), name (string), initial balance (integer), deposit amount (integer) 
Output Format: 
Display updated balance after deposit 
*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    long long accountNumber;
    string name;
    int balance;

public:
    // Function to accept account details
    void acceptDetails() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cin.ignore(); // Clear newline
        cout << "Enter Account Holder Name: ";
        getline(cin, name);
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Function to accept deposit amount
    void depositAmount() {
        int deposit;
        cout << "Enter amount to deposit: ";
        cin >> deposit;
        balance += deposit;
    }

    // Function to display account summary
    void displaySummary() {
        cout << "--- Account Summary ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Updated Balance: ₹" << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.acceptDetails();
    account.depositAmount();
    account.displaySummary();
    return 0;
}

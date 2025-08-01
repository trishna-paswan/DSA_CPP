/*Question 2: 
 
Problem Statement: You are assisting the election committee in automating the voter booth assignment process. Voters are assigned to booths based on the last digit of their Voter ID. If the digit is even, the voter is assigned to Booth A. If the digit is odd, the voter is assigned to Booth B. You’ve been asked to prototype this logic. 
 
 
Tasks: 
Accept a number (e.g., last digit of a voter ID) 
Check whether it's even or odd using an if-else statement 
Display the appropriate message 
 
Input Format: 
•	A single integer (last digit of voter ID) 
 
Output Format: 
•	“You will vote at Booth A.” 
•	“You will vote at Booth B.” 
 
*/
#include <iostream>
using namespace std;

int main() {
    int digit;
    cout << "Enter the last digit of your Voter ID: ";
    cin >> digit;

    if (digit % 2 == 0) {
        cout << "You will vote at Booth A." << endl;
    } else {
        cout << "You will vote at Booth B." << endl;
    }

    return 0;
}

/*Question 3: 
 
Problem Statement: You are designing a math tutor app that helps students practice multiplication tables. The app should prompt the user to enter a number and then display its multiplication table from 1 to 10. This will help students memorize tables easily and interactively. 
Task: 
Accept a number from the user 
•	Display its multiplication table from 1 to 10 using a for loop 
Input Format: 
•	A single integer n 
Output Format: 
•	Lines showing n x 1 = ... up to n x 10 = ... 
*/
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number to display its multiplication table: ";
    cin >> num;
    cout << "Multiplication Table of " << num << ": " << endl;
    for(int i = 1; i <=10; i++){
        cout << num << " x " << i << " = " << num * i << endl;
    }}

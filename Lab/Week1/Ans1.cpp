/*  
Question 1: 
Problem Statement: Imagine you're building a simple student information system for your class. Each student should be able to introduce themselves and enter their marks in two subjects. The system should then display their total score. 
 
Tasks: 
•	Display your name and college name 
•	Accept marks in two subjects 
•	Calculate and print the total marks 
 
Input Format: 
•	Name and college (hardcoded or input by user) 
•	Two integers (marks in Math and Science) 
Output Format: 
•	Printed name and college 
•	Marks entered and total marks displayed clearly 
*/
#include <iostream>
using namespace std;

int main() {
    string name, college;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your college name: ";
    getline(cin, college);
    int mathMarks, scienceMarks;
    cout << "Enter your Math marks: ";
    cin >> mathMarks;

    cout << "Enter your Science marks: ";
    cin >> scienceMarks;

    int totalMarks = mathMarks + scienceMarks;

    cout << "\n--- Marksheet ---" << endl;
    cout << "Student Name: " << name << endl;
    cout << "College Name: " << college << endl;
    cout << "Total Marks: " << totalMarks << endl;

    return 0;
}

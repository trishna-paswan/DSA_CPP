/* 
Question 2: 
 
Problem Statement: You are designing a simple performance tracker for a school. The program should record a student’s name and three subject marks. Based on the average marks, it should decide whether the student has passed or failed. Assume a student passes if the average is 40 or above. 
Task: 
•	Create a class Student with data members for name and marks in three subjects 
•	Add member functions to input details, calculate average, and display result (pass/fail) 
•	Use if-else to decide pass or fail based on average marks 
Input Format: 
Name (string), three integers for marks 
Output Format: 
Display name, average marks, and pass/fail status 

*/

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks[3];
public:
    // Function to input student details
    void inputDetails() {
        cout << "Enter student's name: ";
        getline(cin, name); // Use getline to allow spaces in names
        cout << "Enter marks for three subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
    }

    // Function to calculate average marks
    double calculateAverage() {
        int total = 0;
        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }
        return static_cast<double>(total) / 3;
    }

    // Function to display result
    void displayResult() {
        double average = calculateAverage();
        cout << "Name: " << name << endl;
        cout << "Average Marks: " << average << endl;
        
        if (average >= 40) {
            cout << "Result: Pass" << endl;
        } else {
            cout << "Result: Fail" << endl;
        }
    }
};

int main() {
    Student student; // Create an instance of Student class
    student.inputDetails();
    student.displayResult();
    
    return 0;
}

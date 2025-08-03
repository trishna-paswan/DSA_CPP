/*
Question 4: 
 
Problem Statement: You are developing a digital clock application that can display time in a standard hh:mm:ss format. You need to build the time-handling module first, which stores the time and displays it in the correct format with leading zeros (e.g., 09:05:01). 
Task: 
•	Create a class Time with three integer data members: hour, minute, and second 
•	Add a member function to input time from the user 
•	Add another member function to display time in the hh:mm:ss format using setfill('0') and setw(2) manipulators 
Input Format: 
Three integers representing hour(0-23), minute(0-59), and second (0-59). 
Output Format: 
Display time in hh:mm:ss format (e.g., 04:07:09) 
*/

#include <iostream>
#include <iomanip> // For setfill and setw
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;
public:
    // Member function to input time from the user
    void inputTime() {
        cout << "Enter hour (0-23): ";
        cin >> hour;
        cout << "Enter minute (0-59): ";
        cin >> minute;
        cout << "Enter second (0-59): ";
        cin >> second;
    }

    // Member function to display time in hh:mm:ss format
    // using setfill('0') and setw(2) manipulators 
    void displayTime() const {
        cout << setfill('0') << setw(2) << hour << ":"
             << setfill('0') << setw(2) << minute << ":"
             << setfill('0') << setw(2) << second << endl;
    }
};

int main() {
    Time t;
    t.inputTime();
    cout << "Time in hh:mm:ss format: ";
    t.displayTime();
    return 0;
}

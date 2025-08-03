/*  
Question 1: 
Problem Statement: You are building a basic geometry calculator. The app should allow users to enter the dimensions of a rectangle and compute both the area and perimeter using a class-based approach. 
Task: 
•	Define a class Rectangle with length and breadth as private data members  
•	Create public member functions to input values, calculate area, and calculate perimeter 
•	Display the area and perimeter to the user 
Input Format: 
Two integers representing length and breadth (Integers) 
Output Format: 
Display area and perimeter of the rectangle  
*/

#include <iostream>
using namespace std;

class Rectangle {

private:
    int length;
    int breadth;
public:

    // Function to input values
    void inputValues() {
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter breadth of the rectangle: ";
        cin >> breadth;
    }

    // Function to calculate area
    int calculateArea() {
        return length * breadth;
    }

    // Function to calculate perimeter
    int calculatePerimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    Rectangle rect; // Create an instance of Rectangle class
    rect.inputValues();
    
    int area = rect.calculateArea();
    int perimeter = rect.calculatePerimeter();
    
    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;

    return 0;
}

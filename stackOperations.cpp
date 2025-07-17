#include <iostream>
using namespace std;

const int MAX = 100; // Maximum size of the stack
int myStack[MAX];    // Renamed to avoid conflict with std::stack
int top = -1;        // Stack is empty

bool isFull() {
    return top == MAX - 1; // Check if stack is full
}
bool isEmpty() {
    return top == -1;      // Check if stack is empty
}

void push(int value) {
    if (isFull()) {
        cout << "Stack overflow! Cannot push " << value << endl;
    } else {
        myStack[++top] = value; // Increment top and add value
        cout << "Pushed " << value << " onto the stack." << endl;
    }
}

int pop() {
    if (isEmpty()) {
        cout << "Stack underflow! Cannot pop from an empty stack." << endl;
        return -1; // Return -1 to indicate failure
    } else {
        int value = myStack[top--]; // Get the top value and decrement top
        cout << "Popped " << value << " from the stack." << endl;
        return value; // Return the popped value
    }
}
int peek() {
    if (isEmpty()) {
        cout << "Stack is empty! Cannot peek." << endl;
        return -1; // Return -1 to indicate failure
    } else {
        return myStack[top]; // Return the top value without removing it
    }
}
void display() {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << myStack[i] << " "; // Print each element in the stack
        }
        cout << endl;
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display(); // Display current stack elements

    cout << "Top element is: " << peek() << endl; // Peek at the top element

    pop(); // Pop the top element
    display(); // Display stack after popping

    pop(); // Pop another element
    pop(); // Pop the last element
    pop(); // Attempt to pop from an empty stack

    return 0;
}

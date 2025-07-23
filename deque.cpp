/* This code demonstrates the use of a deque (double-ended queue) in C++.
    * It includes operations to add and remove elements from both ends of the deque.
    * The main function shows how to use these operations and displays the contents of the deque. 
*/
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    // Adding elements to the front and back
    dq.push_front(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_back(40);

    // Displaying the deque
    cout << "Deque elements: ";
    for (int elem : dq) {
        cout << elem << " ";
    }
    cout << endl;

    // Removing elements from the front and back
    dq.pop_front();
    dq.pop_back();

    // Displaying the deque after removals
    cout << "Deque after pop operations: ";
    for (int elem : dq) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}

/* Description: Implementation of a queue using a linked list in C++
This code implements a simple queue using a linked list in C++. 
It includes methods to enqueue, dequeue, peek at the front element, and check if the queue is empty. 
The main function demonstrates the usage of the queue. */

#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};
class Queue {
    Node* front;
    Node* rear;
public:
    Queue() {
        front = rear = NULL;
    }

    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (rear == NULL) {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    void dequeue() {
        if (front == NULL) return;
        Node* temp = front;
        front = front->next;
        if (front == NULL) rear = NULL; // If queue is empty after dequeue
        delete temp;
    }

    int peek() {
        if (front == NULL) return -1; // Indicating empty queue
        return front->data;
    }

    bool isEmpty() {
        return front == NULL;
    }
};
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.peek() << endl; // Should print 10

    q.dequeue();
    cout << "Front element after dequeue: " << q.peek() << endl; // Should print 20

    while (!q.isEmpty()) {
        cout << "Dequeued: " << q.peek() << endl;
        q.dequeue();
    }

    return 0;
}


// Queue implementation using stl 

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl; // Should print 10

    // Dequeue an element
    q.pop();
    cout << "Front element after dequeue: " << q.front() << endl; // Should print 20

    // Check if queue is empty
    while (!q.empty()) {
        cout << "Dequeued: " << q.front() << endl;
        q.pop();
    }

    return 0;
}


// This code implements a circular queue with basic operations like enqueue, dequeue, peek, and display. 
// It uses an array to store the elements and manages the front and rear indices to allow circular behavior.
// The main function demonstrates the usage of the CircularQueue class by performing various operations and displaying the queue's state.
// The CircularQueue class provides a simple and efficient way to manage a fixed-size queue with wrap-around behavior.
// The code includes error handling for full and empty queue conditions, ensuring robust operation.
 
#include <iostream>
using namespace std;
class CircularQueue { 
    int* arr; 
    int front, rear, size, capacity;
public:
    CircularQueue(int cap) {
        capacity = cap;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }
    CircularQueue() {
        delete[] arr;
    }
    bool isFull() {
        return size == capacity;
    }
    bool isEmpty() {
        return size == 0;
    }
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        size++;
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        front = (front + 1) % capacity;
        size--;
    }
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1; // Indicating empty queue
        }
        return arr[front];
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
};
int main() {
    CircularQueue cq(5);

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    
    cq.display(); // Display current elements in the queue

    cout << "Front element: " << cq.peek() << endl; // Should print 10

    cq.dequeue();
    cout << "Front element after dequeue: " << cq.peek() << endl; // Should print 20

    cq.enqueue(60); // This should fail since the queue is full now
    cq.display(); // Display current elements in the queue

    return 0;
}

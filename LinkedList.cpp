#include <iostream>  
#include <cstdlib> // For malloc and free n
using namespace std;  

// Define Node structure  
struct Node {
    int data;
    Node* next;
};

// Head pointer to the linked list 
Node* head = NULL; 

// Function to insert at beginning
void insertAtBeginning(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    cout << value << " inserted at the beginning.\n";
}

// Function to insert at end 
void insertAtEnd(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value; 
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    cout << value << " inserted at the end.\n";
}

// Function to insert at a specific position
void insertAtPosition(int value, int pos) {
    if (pos < 1) {
        cout << "Invalid position!\n";
        return;
    }

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        cout << value << " inserted at position " << pos << ".\n";
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1; i++) {
        if (temp == NULL) {
            cout << "Position out of range!\n";
            free(newNode);
            return;
        }
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << value << " inserted at position " << pos << ".\n";
}

// Function to delete from beginning
void deleteFromBeginning() {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    cout << temp->data << " deleted from the beginning.\n";
    free(temp);
}

// Function to delete from end
void deleteFromEnd() {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }
    if (head->next == NULL) {
        cout << head->data << " deleted from the end.\n";
        free(head);
        head = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    cout << temp->next->data << " deleted from the end.\n";
    free(temp->next);
    temp->next = NULL;
}

// Function to delete from specific position
void deleteFromPosition(int pos) {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }
    if (pos < 1) {
        cout << "Invalid position!\n";
        return;
    }
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        cout << temp->data << " deleted from position " << pos << ".\n";
        free(temp);
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1; i++) {
        if (temp == NULL || temp->next == NULL) {
            cout << "Position out of range!\n";
            return;
        }
        temp = temp->next;
    }
    Node* nodeToDelete = temp->next;
    if (nodeToDelete == NULL) {
        cout << "Position out of range!\n";
        return;
    }
    temp->next = nodeToDelete->next;
    cout << nodeToDelete->data << " deleted from position " << pos << ".\n";
    free(nodeToDelete);
}

// Function to search for a value
void search(int key) {
    Node* temp = head;
    int position = 1;
    while (temp != NULL) {
        if (temp->data == key) {
            cout << key << " found at position " << position << ".\n";
            return;
        }
        temp = temp->next;
        position++;
    }
    cout << key << " not found in the list.\n";
}

// Function to display the list
void display() {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Main function with menu
int main() {
    int choice, value, pos;

    do {
        cout << "\n====== Linked List Menu ======\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Delete from Beginning\n";
        cout << "5. Delete from End\n";
        cout << "6. Delete from Position\n";
        cout << "7. Search for a Value\n";
        cout << "8. Display Linked List\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at beginning: ";
                cin >> value;
                insertAtBeginning(value);
                break;
            case 2:
                cout << "Enter value to insert at end: ";
                cin >> value;
                insertAtEnd(value);
                break;
            case 3:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position to insert at: ";
                cin >> pos;
                insertAtPosition(value, pos);
                break;
            case 4:
                deleteFromBeginning();
                break;
            case 5:
                deleteFromEnd();
                break;
            case 6:
                cout << "Enter position to delete: ";
                cin >> pos;
                deleteFromPosition(pos);
                break;
            case 7:
                cout << "Enter value to search: ";
                cin >> value;
                search(value);
                break;
            case 8:
                display();
                break;
            case 9:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 9);

    return 0;
}

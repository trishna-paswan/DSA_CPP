
#include <iostream>
using namespace std;

// Individual Node Class
class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

// Linked-List
class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;

    }

    //PUSH FRONT FUNCTION
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        } else{
            newNode -> next = head;
            head = newNode;
        }
    }

    //PUSH BACK FUNCTION
    void push_back(int val){
        Node* newNode = new Node (val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            tail -> next = newNode;
            tail = newNode;
        }
    }

    // POP FRONT FUNCTION
    void pop_front (){
        if(head == NULL){
            cout << "LL is empty\n";
            return;
        }

        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;

        delete temp;
    }

    // POP BACK FUNCTION
    void pop_back(){
        if(head == NULL){
            cout << "LL is empty\n";
            return;
        }
        Node* temp = head;
        while(temp -> next != tail){
            temp = temp -> next;
        }
        temp -> next = NULL;
        delete tail;
        tail = temp;
    }

    // PRINT THE LINKED LIST
    void printll(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp-> data << " -> ";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
};

int main(){

    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.push_back(4);  

    ll.pop_front();

    ll.printll();

    ll.pop_back();
    ll.printll();

    return 0;
}

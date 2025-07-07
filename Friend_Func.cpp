#include <iostream>
using namespace std;

class Box {
private:
    int length; 

public:
    Box() : length(0) {}

    // Declare friend function
    friend void setLength(Box &b, int l);
};

// Friend function definition
void setLength(Box &b, int l) {
    b.length = l;  // Accessing private member
    cout << "Length is set to: " << b.length << endl;
}

int main() {
    Box b;
    setLength(b, 10);  // Can access private member
    return 0;
}

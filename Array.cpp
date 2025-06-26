#include <iostream>
using namespace std;

int main(){
    // Initializing the size of array.
    int marks[5] = {99,100,54,36,88};

    // Accordingly the size is updated.
    double price[] = {98.99,105.67,30.00};

    // Access the data    array_name[index] = changed_value
    marks[0] = 101;

    // index value is : 0 to size-1
    cout << marks[0] << endl;
    
    // Size in memory
    int sz = sizeof(marks);

    // Find Size
    int s = sizeof(marks) / sizeof(int);

    // Loops : 0 to size-1
    for(int i=0; i<s; i++){
        cout << marks[i] << endl;
    }

    // Largest value in an ARRAY
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int largest = INT_MIN;
    for(int i=0; i<size; i++){
        // max in-buil function
        largest = max(nums[i], largest);
    }
    cout << "Maximum = " << largest << endl;

    // smallest value in an ARRAY
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int smallest = INT_MAX;
    for(int i=0; i<size; i++){
        // min in-buil function
        smallest = min(nums[i], smallest);
    }
    cout << "Minimum = " << smallest << endl;
    return 0;
}

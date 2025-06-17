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

    return 0;
}

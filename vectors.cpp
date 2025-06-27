#include <iostream>
#include <vector>     // Header file for vector to be imported.
using namespace std;

int main() {
    vector<int> vec = {1,2,3};  
    cout << vec[0] << endl;
    
    vector<int> vec (3,0);  //output, 0 value for 3 size vector
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    return 0;
}

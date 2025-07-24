#include <iostream>
#include <vector>      // Header file for vector to be imported.
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
#include <iostream>
#include <vector>     // Header file for vector to be imported.
using namespace std;

int main() {
    vector<char> vec = {'a','b','c','d'};  
    // for each loop
    for(char val : vec){
        cout << val << endl; // all the values of vector are printed
    }
    return 0;
}
// VECTOR FUNCTIONS

#include <iostream> 
#include <vector>     // Header file for vector to be imported.
using namespace std;

int main() {
    vector<int> vec = {1,2};  

    // Size of a vector
    cout << "size = " << vec.size() << endl;

    // PUSH_BACK
    vec.push_back(25);
    cout << "After pushback size = " << vec.size() << endl;

    // POP_BACK
    vec.pop_back();
    
     // for each loop
    for(int val : vec){
        cout << val << endl; // all the values of vector are printed
    }
    return 0;
}

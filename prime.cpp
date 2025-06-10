// CHECK PRIME NUMBER.
#include <iostream>
using namespace std;

int main(){
    int i;
    int n;
    cout << "Enter Number :" << endl;
    cin >> n;
    for (i=2 ; i <= n-1 ; i++){
        if (n%i == 0){cout << "NON PRIME" << endl;break;}
        else{cout<<"PRIME.";break;}
    }
    return 0;
}
// REVERSE ARRAY

#include <iostream>
using namespace std; 
 
void reverseArray(int l[], int size){
    int st = 0 , end = size-1;
    while (st < end){
        swap(l[st], l[end]);
        st++;
        end--;
    }
}
int main(){
    int l[7] = {4,2,7,8,1,2,5};
    int target = 0;
    int size = 7;
    reverseArray(l,size);
    for(int i=0; i<size ; i++){
        cout << l[i] << endl;
    }
    cout << endl;
    return 0;
}

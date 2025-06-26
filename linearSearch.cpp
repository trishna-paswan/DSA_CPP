// LINEAR SEARCH 
#include <iostream>
using namespace std;
int linearSearch(int l[], int target, int size){
        for(int i = 0; i<=size; i++){
        if (l[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int l[7] = {4,2,7,8,1,2,5};
    int target = 0;
    int size = 7;
    cout << linearSearch(l,target,size) << endl;
    return 0;
}

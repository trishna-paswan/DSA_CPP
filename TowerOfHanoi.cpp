
#include <iostream>
using namespace std;

void TowerOfHanoi(int n, char source, char destination, char temp) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Step 1: Move n-1 disks from source to temp using destination
    TowerOfHanoi(n - 1, source, temp, destination);

    // Step 2: Move the largest disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Step 3: Move n-1 disks from temp to destination using source
    TowerOfHanoi(n - 1, temp, destination, source);
}
int main() {
    int n = 3;
    TowerOfHanoi(n, 'A', 'B', 'C');  // A = source, C = destination, B = temp
    return 0;
}

// WAP TO CALC THE SUM OF 2 NUMBERS.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
    return 0;
}

// CONDITIONAL STATEMENTS

#include <iostream>
using namespace std;

int main() {
    int n = -45;
    if(n > 0){
        cout << "Positive Number" << endl;
    } else {cout << "Negative Number" << endl; };
    return 0;
}

// USER INPUT CONDITIONAL STATEMENT

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter Age: \n";
    cin >> age ;

    if (age >= 18){
        cout << "You can vote. \n";
    } else {
        cout << "You cannot vote. \n";
    }
    return 0;
}

// FIND CHARACTER LOWERCASE OR UPPERCASE

#include <iostream>
using namespace std;

int main() {
    char n;
    cout << "Enter any string : \n";
    cin >> n ;
    // implicit conversion into ascii value
    if ( n >= 67 && n < 97){
        cout << "UpperCase \n";
    } else {
        cout << "LowerCase \n";
    }
    return 0;
}

// TERNARY STATEMENT

#include <iostream>
using namespace std;

int main() {
    int n = 45;

    cout << (n >= 0 ? "Positive" : "Negative") << endl;
    return 0;
}

// WHILE LOOPS

#include <iostream>
using namespace std;

int main() {

    int count = 1;

    while(count <= 5){
        cout << count << endl;
        ++count;
    }
    return 0;
}

// FOR LOOPS

#include <iostream>
using namespace std;

int main() {
    int i ;
    for(i = 1; i<=5 ; ++i ){
        cout << i << endl;
    }
    return 0;
}

// SUM FROM 1 to N

#include <iostream>
using namespace std;

int main() {
    int i,sum = 0;
    for(i = 1; i<=5 ; i++ ){
        sum += i;
        cout << i << endl;
    }
    cout << sum << endl;
    return 0;
}

// SUM OF ALL ODD NUM FROM 1 TO N

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Input N : \n";
    cin >> n;
    for(int i = 1; i<=n ; i++ ){
        if(i%2!=0){
            sum += i;}}
    cout << sum << endl;
    return 0;
}

// DO-WHILE LOOP

#include <iostream>
using namespace std;

int main() {
    do {
        cout << "Hello World !";
    } while (3 > 5);
    return 0;
}


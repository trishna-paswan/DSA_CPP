// CONSTRUCTOR OVERLOADING  -> COMPILE TIME 

#include <iostream>
#include <string>
using namespace std;

class Student {
    public:

    string name;

    Student(){
        cout << "non-parameterised\n";
    }

    Student(string name) {
        this->name = name;
        cout << "parameterised\n";

    }
};

int main(){
    Student s1("Tony");           //parameterised
    // Student s1;          //non-parameterised
    return 0;
}

// FUNCTION OVERLOADING  -> COMPILE TIME 
#include <iostream>
#include <string>
using namespace std;

class Print {
public:
    void Show(int x){
        cout << "int " << x << endl;

    }
    void show(char ch){
        cout << "char " << ch << endl;
    }
};

int main(){
    Print p1;
    p1.Show(101);
    return 0;
}


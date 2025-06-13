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


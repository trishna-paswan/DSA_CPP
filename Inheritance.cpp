#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Person {
    public:
    int rollno;
    
    // CONSTRUCTOR OF PARENT CLASS IS BEING ACCESSED EXPLICITLY.
    Student(string name, int age, int rollno) : Person( name, age){
        this->rollno = rollno;

    }

    void getInfo(){
        cout << "name :" << name << endl;
        cout << "age :" << age << endl;
        cout << "rollno :" << rollno << endl;
    }
};

int main(){
    Student s1("Rahul Kumar", 21, 1234);
    // s1.name = "Rahul Kumar";
    // s1.age = 21;
    // s1.rollno = 1234;

    s1.getInfo();
    return 0;
}

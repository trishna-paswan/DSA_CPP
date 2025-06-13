// SINGLE LEVEL INHERITANCE
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

// MULTILEVEL INHERITANCE

#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;
};

class Student : public Person {
    public:
    int rollno;
};

class GradStudent : public Student{
    public:
    string research;
};

int main(){
    GradStudent s1;
    s1.name = "Tony Star";
    s1.research = "Physics";

    cout << s1.name << endl;
    cout << s1.research << endl;
    return 0;
}

// MULTIPLE INHERITANCE

#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
    string name;
    int rollno;
};

class Teacher {
    public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher {

};

int main(){
    TA s1;
    s1.name = "Tony Star";
    s1.subject = "Physics";

    cout << s1.name << endl;
    cout << s1.subject << endl;
    return 0;
}

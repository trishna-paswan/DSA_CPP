// CONSTRUCTOR
#include <iostream>
using namespace std;
class Teacher{

private:
    double salary;

public:
    // NON - PARAMETERISED CONSTRUCTOR
    Teacher(){   
        cout << "Hi! I'm Constructor" << endl;
        dept = "Computer Science";
        // Set same values for all the objects.
    }

    // PARAMETERISED CONSTRUCTOR
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;   // THIS POINTER SAYS IT'S OBJECTS PROPERTIES
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // COPY CONSTRUCTOR
    Teacher(Teacher &obj) {  //PASS BY REFERENCE
        cout << "I'm Copy Constructor..." << endl;
        this-> name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
    }
    
    // Properties or Attributes
    string name;
    string dept;
    string subject;

    // Methods or Functions
    void changeDept(string newDept){
        dept = newDept;
    }

    // SET DATA FOR PRIVATE or SETTER
    void setSalary(double s){
        salary = s;
    }

    // GET DATA FOR PRIVATE or GETTER
    double getSalary(){
        return salary;
    }

    void getInfo(){
        cout << "name: " << name << endl;
    }

};

int main(){
    // // Object of the class
   Teacher t1;
    Teacher t2;
    t1.name = "Shradha";
    t1.subject = "C++";

    t1.dept = "Computer Science";
    t1.setSalary(25000);

    cout << t1.dept << endl;
    cout << t1.getSalary() << endl;

    //FOR PARAMETERISED CONSTRUCTOR
    Teacher t1("Shraddha" , "ComputerScience", "C++", 25000);
  //  t1.getInfo();

    Teacher t2(t1); // DEFAULT COPY CONSTRUCTOR
    t2.getInfo();

    return 0;
}


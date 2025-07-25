// ABSTRACT CLASSES 
 
#include <iostream> 
#include <string> 
using namespace std;

class Shape {   // Abstract class -> couldn't make a obj of this class 
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {

    public:
    void draw(){ 
        cout << "Drawing a circle \n" << endl;
    } 
};

int main(){
    Circle p1;
    p1.draw();
    return 0;
}

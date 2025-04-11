#include<bits/stdc++.h>
using namespace std;


// Class Methods
// Methods are functions that belongs to the class.
// There are two ways to define functions that belongs to a class:

// Inside class definition
// Outside class definition

class MyClass {
    public: 
        void myOutsideMethod();
        void myInsideMethod(){
            cout<<"this is the myInsideMethod for MyClass"<<endl;
        }

};

void MyClass::myOutsideMethod(){
    cout<<"this is the myOutsideMethod for MyClass"<<endl;
}

int main() {

    MyClass myObj;

    myObj.myOutsideMethod();
    myObj.myInsideMethod();

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// In C++, there are three access specifiers:

// public - members are accessible from outside the class
// private - members cannot be accessed (or viewed) from outside the class
// protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.

// Note: It is possible to access private members of a class using a public method inside the same class. See the next chapter (Encapsulation) on how to do this.

// Tip: It is considered good practice to declare your class attributes as private (as often as you can). This will reduce the possibility of yourself (or others) to mess up the code. This is also the main ingredient of the Encapsulation concept, which you will learn more about in the next chapter.



class MyClass {
    public:
        MyClass(){
            cout<<"this is the constructor function."<<endl;
            myPrivateFunc();
        }
    private:
        void myPrivateFunc();
};

void MyClass::myPrivateFunc(){
            cout<<"this is the private function."<<endl;
        }

int main (){
    MyClass myObj;

    return 0;
}
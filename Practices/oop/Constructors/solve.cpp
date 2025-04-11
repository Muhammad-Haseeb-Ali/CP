#include<bits/stdc++.h>
using namespace std;

// Note: The constructor has the same name as the class, it is always public, and it does not have any return value.

class MyClass{
    public: 
        MyClass(int xVal, int yVal, int zVal );
        int x;
        int y;
        int z;
};

MyClass::MyClass(int xVal, int yVal, int zVal){
    x = xVal;
    y = yVal;
    z = zVal;
    cout<<"this is the constructor function."<<endl;
}

int main () {
    MyClass myObj(1, 2, 3);

    cout<<myObj.x<<endl;
    cout<<myObj.y<<endl;
    cout<<myObj.z<<endl;

    return 0;
}
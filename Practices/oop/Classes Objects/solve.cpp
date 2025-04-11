#include<bits/stdc++.h>
#include<string.h>
using namespace std;

class MyCLass {
    public: 
        int x;
        int y;
        string z;
};

int main(){
    MyCLass myObj;

    myObj.x = 9;
    myObj.y = 10;
    myObj.z = "hello world";

    cout<<myObj.x<<endl;
    cout<<myObj.y<<endl;
    cout<<myObj.z<<endl;

    return 0;
}
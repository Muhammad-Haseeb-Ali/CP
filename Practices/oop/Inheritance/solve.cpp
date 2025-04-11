#include<bits/stdc++.h>
using namespace std;

class Vehicle {
    public:
        int noOfTyres = 4;
        bool canFly = false;
        bool canSwim = false;
};

class BJ40 {
    public:
        bool isHaseebsFavourit = true;
};

class MyBJ40 : public BJ40, public Vehicle {
    public:
        string number;
        MyBJ40(string num){
            number = num;
        }
};

int main() {

    MyBJ40 myBj40("pak 92.98");
    cout<<myBj40.number;

    return 0;
}
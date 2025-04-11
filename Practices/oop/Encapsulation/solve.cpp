#include<bits/stdc++.h>
using namespace std;

// To access a private attribute, use public "get" and "set" methods

class Employee {
    public:
        int pin;
        string name;
        Employee(string nameVal, string passwordVal, int pinVal){
            name = nameVal;
            password = passwordVal;
            pin = pinVal;
        }
        string getCredentials(int pinVal) {
            if(pin == pinVal)
            return name + " - " + password;
            else return "pin in invalid";
        }
    private:
        string password;

};

int main(){

    Employee haseeb("haseeb", "bessah", 123);
    int pin;
    cout<<"Enter pin: ";
    cin>>pin;
    cout<<endl<<"Your pin is: "<<pin<<endl;
    cout<<haseeb.getCredentials(pin);

    return 0;
}
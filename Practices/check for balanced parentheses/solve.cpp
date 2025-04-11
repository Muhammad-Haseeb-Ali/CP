#include<bits/stdc++.h>
using namespace std;

class OpeningPar {
    public:
    char par;
    OpeningPar* next;
    OpeningPar(char p);
};

OpeningPar::OpeningPar(char p) {
    par = p;
}

void push(char p);
void pop();

OpeningPar* head;

void push(char p) {
    OpeningPar* par;
    par = new OpeningPar(p);
    if(head == nullptr) {
        head = par;
        par->next = nullptr;
    }
    else {
        par->next = head;
        head = par;
    }
}

void pop() {
    OpeningPar* temp = head->next;
    delete head;
    head = temp;
}

int main () {
    head = nullptr;

    string s;
    getline(cin, s);

    for(int n = 0; n < s.size(); n++) {
        if(s[n] == '(' || s[n] == '[' || s[n] == '{') {
            push(s[n]);
        }

        if(s[n] == ')' || s[n] == ']' || s[n] == '}') 
        {
            if(head == nullptr) break;

            if(
                (head->par == '(' && s[n] == ')')
                || 
                (head->par == '[' && s[n] == ']')
                || 
                (head->par == '{' && s[n] == '}')
            ) {
                pop();
            } 
            else break;
        }
    }

    if(head == nullptr) 
        cout << "Statement is balanced\n";
    else 
        cout << "Statement is unbalanced\n";

}

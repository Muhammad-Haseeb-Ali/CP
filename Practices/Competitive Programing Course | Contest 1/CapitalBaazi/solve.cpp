#include<bits/stdc++.h>
using namespace std;

int main (){
    while(true) {
        string s;
        cin>>s;

        if(s.size() == 0) break;

        for(int n = 0; n < s.size(); ++n)
            s[n] = (s[n] - 'a') + 'A';

        cout << s << endl;
    }
}
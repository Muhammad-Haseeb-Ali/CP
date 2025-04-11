#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main () {
    string str;
    cin >> str;

    long long max = 0;

    char lc_a = ' ';
    long long lc_c = 0;

    for(int i=0; i<=str.size()-1; i++) {
        if(lc_a != str[i]){
            lc_a = str[i];
            lc_c = 1;
        }
        else {
            lc_c+=1;
        }
        if(lc_c > max) max = lc_c;
    }

    cout << max;

}
#include<bits/stdc++.h>
using namespace std;

int main () {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long product = 1;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            product *= x;
        }

        int last_digit = product % 10;

        if(last_digit == 3 || last_digit == 5 || last_digit == 2){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}
#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main () {
    long int n;
    cin >> n;

    vector<int> v;
    int input;

    for(int i=0; i < n; i++) {
        cin >> input;
        v.push_back(input);
    }

    long long moves = 0;
    long long prev = v[0];

    for(int i=1; i < n; i++) {
        if (v[i] < prev) {
            moves += prev - v[i];
        } else {
            prev = v[i];
        }
    }


    cout << moves;

}
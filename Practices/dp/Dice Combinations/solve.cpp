#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void solve(int n) {
    vector<int> dp(n + 1, 0);
    dp[0] = 1;

    for(int i=1; i<=n; i++ ) {
        for(int j=1; j<=6; j++) {
            if(j <= i) {
                dp[i] = (dp[i] + (dp[i - j])) % MOD;
            }
        }
    }

    cout << dp[n];
}

int main () {
    int n;
    cin >>n;

    solve(n);
}
#include<bits/stdc++.h>
using namespace std;

vector<long long> dp;

int fibonacci(int n){
    if(n <= 0) return 1;
    if(dp[n] != -1) return dp[n];

    dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return dp[n];
}

int main () {
    int n;
    cin >> n;

    dp.resize(n+1, -1);

    cout << fibonacci(n);
}
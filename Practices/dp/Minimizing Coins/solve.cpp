#include<bits/stdc++.h>
using namespace std;

vector<int> coins;
vector<int> dp;

int solve(int m) {
    if(m==0) return 0;
    if(m<0) return INT_MAX;

    if(dp[m] != -1) return dp[m];

    int min_coins = INT_MAX;

    for(auto coin:coins){
        // int no_of_coins_used = m/coin;
        // int remaining_money = m%coin;

        int answer =  solve(m - coin);

        if(answer != INT_MAX) 
            min_coins = min(min_coins, answer + 1);

    }

    return dp[m] = min_coins;
}

int main () {

    int n;
    cin >> n;
    int m;
    cin >> m;

    coins.resize(n);
    dp.resize(m +1, -1);

    for(int i = 0; i < n; i++) {
        int coin;
        cin >> coin;
        coins.at(i) = coin;
    }

    int answer = solve(m);
    int result = (answer == INT_MAX) ? -1 : answer;

    cout << result;
}
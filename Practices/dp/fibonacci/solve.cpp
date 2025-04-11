#include <iostream>
#include <vector>

using namespace std;

vector<long long> dp;

long long fibonacci(long long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (dp[n] != -1) return dp[n];

    dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return dp[n];
}

int main() {
    long long n;
    cin >> n;

    dp.resize(n + 1, -1);

    cout << fibonacci(n) << endl;

    return 0;
}

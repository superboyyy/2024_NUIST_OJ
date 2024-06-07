#include <bits/stdc++.h>
using namespace std;

const int MAXN = 24;
vector<long long> dp(MAXN + 1);

void calMethods() {
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i < MAXN; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
}

int main() {
    calMethods();
    int n;
    while (cin >> n) {
        cout << dp[n] << endl;
    }
    return 0;
}
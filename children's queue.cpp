#include <bits/stdc++.h>
using namespace std;

void calNeed(int n) {
    vector<int> res(n+1);

    res[0] = 1;
    res[1] = 1;
    res[2] = 2;
    res[3] = 4;

    for (int i = 4; i <= n; i++) {
        res[i] = res[i-1] + res[i-2] + res[i-4];
    }

    cout << res[n] << endl;
}

int main() {
    int n;
    while (cin >> n) {
        calNeed(n);
    }
    return 0;
}
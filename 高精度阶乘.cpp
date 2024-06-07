#include <bits/stdc++.h>
using namespace std;

void multiply(vector<int> &res, int n) {
    int carry = 0;
    int sum = 0;
    for (int i = 0; i < res.size(); i++) {
        sum = res[i] * n + carry;
        res[i] = sum % 10;
        carry = sum / 10;
    }
    while (carry) {
        res.push_back(carry % 10);
        carry = carry / 10;
    }
}

void mmultiply(int N) {
    vector<int> res;
    res.push_back(1);

    for (int i = 2; i <= N; i++) {
        multiply(res, i);
    }

    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
        if (i == 0)
            cout << endl;
    }
}

int main() {
    int N;
    while (cin >> N) {
        mmultiply(N);
    }
    return 0;
}
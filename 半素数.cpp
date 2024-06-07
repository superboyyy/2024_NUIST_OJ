#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000000;
vector<bool> is_prime(MAXN + 1, true);
vector<bool> is_semi_prime(MAXN + 1, false);
vector<int> prime;

void calPrime() {
    is_prime[0] = false;
    is_prime[1] = false;
    for (int i = 2; i <= sqrt(MAXN); i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= MAXN; i++) {
        if (is_prime[i])
            prime.push_back(i);
    }
}

void calSemiPrime() {
    long long product;
    int n = prime.size();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            product = (long long)prime[i] * prime[j];   // 注意转换
            if (product > MAXN) break;
            is_semi_prime[product] = true;
        }
    }
}

int main() {
    int N;
    calPrime();
    calSemiPrime();
    while (cin >> N) {
        if (is_semi_prime[N])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
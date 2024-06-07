#include <bits/stdc++.h>
using namespace std;

bool F(int n) {
    int a = 7;
    int b = 11;
    int c;

    if (n == 0) return false;
    if (n == 1) return false;

    for (int i = 2; i <= n; i++) {
        c = (a + b) % 3;
        a = b % 3;
        b = c % 3;
    }

    if (c == 0) return true;
    else return false;
}

int main() {
    int n;
    while (cin >> n) {
        if (F(n))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
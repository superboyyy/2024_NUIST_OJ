#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count, final, s, a[4], max, min;
    while (cin >> n) {
        count = 0;
        final = 0;
        s = n;
        while (final != 6174 && n != 6174) {
            a[0] = s % 10;
            a[1] = s / 10 % 10;
            a[2] = s / 100 % 10;
            a[3] = s / 1000;

            sort(a, a+4);
            max = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
            min = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];

            final = max - min;
            count++;
            s = final;
        }
        cout << count << endl;
    }
    return 0;
}
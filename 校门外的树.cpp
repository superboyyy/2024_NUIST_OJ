#include<bits/stdc++.h>
using namespace std;

int main() {
    int l, m;
    while (cin >> l >> m) {
        int x1, x2, count = 0;
        vector<int> a(l+1, 0);
        for (int i = 0; i < m; i++) {
            cin >> x1 >> x2;
            for (int j = x1; j <= x2; j++) {
                a[j] = 1;
            }
        }

        for (int i = 0; i <= l; i++) {
            if (a[i] == 0)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}

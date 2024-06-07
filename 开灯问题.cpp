#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    while (cin >> n >> k) {
        vector<bool> lights(n + 1, false);

        for (int i = 1; i <= k; i++) {
            for (int j = i; j <= n; j += i) {
                lights[j] = !lights[j];
            }
        }

        bool space = false;
        for (int i = 1; i <= n; i++) {
            if (!lights[i]) {
                if (!space) {
                    cout << i;
                    space = true;
                }
                else
                    cout << " " << i;
            }
        }
        cout << endl;
    }
    return 0;
}
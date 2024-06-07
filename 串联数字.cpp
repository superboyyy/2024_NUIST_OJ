#include<bits/stdc++.h>
using namespace std;

int main() {
    int K;
    while(cin >> K) {
        while(K--) {
            int n;
            cin >> n;
            for (int i = 1; i < n; i++) {
                n -= i;
            }
            cout << (n-1) % 9 + 1 << endl;
        }
    }
    return 0;
}
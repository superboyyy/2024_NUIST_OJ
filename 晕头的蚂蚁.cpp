#include <bits/stdc++.h>
using namespace std;

int main() {
    int K;
    cin >> K;
    while(K--) {
        int L,n;
        cin >> L >> n;
        int position[n];
        for (int i = 0; i < n; i++) {
            cin >> position[i];
        }
        int minTime = 0, maxTime = 0;
        for (int i = 0; i < n; i++) {
            int minPosition = min(position[i], L - position[i]);
            int maxPosition = max(position[i], L - position[i]);

            minTime = max(minTime, minPosition * 1);
            maxTime = max(maxTime, maxPosition * 1);
        }
        cout << minTime << " " << maxTime << endl;
    }
    return 0;
}
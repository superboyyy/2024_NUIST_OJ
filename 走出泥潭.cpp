#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        vector<vector<int>> map(n, (vector<int>) m);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> map[i][j];
            }
        }
        string routes;
        int i = 0,j = 0;
        while (true) {
            if (map[i][j] == 1) {
                if (!routes.empty()) {
                    routes += ">";
                }
                routes += "(" + to_string(i + 1) + "," + to_string(j + 1) + ")";
                if (i == n - 1 && j == m - 1)
                    break;
            }
            if ((j < m - 1) && (map[i][j + 1] == 1)) {
                j++;
            } else if ((i < n - 1) && (map[i+ 1][j] == 1)) {
                i++;
            }
        }
        cout << routes << endl;
    }
    return 0;
}
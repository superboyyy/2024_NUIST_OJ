#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<vector<int>> zombies(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> zombies[i][j];
        }
    }
    int maxZombies = 0, max1 = 0, max2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            max1 = zombies[i][j];
            // 十字架炸弹
            for (int k = 1; k <= m; k++) {
                // 上
                if (i - k >= 0) max1 += zombies[i-k][j];
                // 右
                if (j + k < n) max1 += zombies[i][j+k];
                // 下
                if (i + k < n) max1 += zombies[i+k][j];
                // 左
                if (j - k >= 0) max1 += zombies[i][j-k];
            }

            // 对角线炸弹
            max2 = zombies[i][j];

            for (int k = 1; k <= m; k++) {
                // 左上
                if (i - k >= 0 && j - k >= 0) max2 += zombies[i-k][j-k];
                // 左下
                if (i + k < n && j - k >= 0) max2 += zombies[i+k][j-k];
                // 右上
                if (i -k >= 0 && j + k < n) max2 += zombies[i-k][j+k];
                // 右下
                if (i + k < n && j +k<n) max2 += zombies[i+k][j+k];
            }
            maxZombies = max(maxZombies, max(max1, max2));
        }
    }


    cout << maxZombies << endl;
    return 0;
}
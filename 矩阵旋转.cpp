#include<iostream>

using namespace std;

const int N = 10;

int main() {
    long long int a[4][N][N], b[N][N], sum[N][N];
    int n, k, round, remain;

    while (cin >> n) {
        // 初始化矩阵
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[0][i][j];
            }
        }

        // 旋转矩阵
        for (int m = 1; m < 4; m++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    a[m][i][j] = a[m - 1][n - j - 1][i];
                }
            }
        }

        // 计算一个周期的和放到b中
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                b[i][j] = a[0][i][j] + a[1][i][j] + a[2][i][j] + a[3][i][j];
            }
        }

        // 计算旋转次数关系
        cin >> k;
        round = k / 4;
        remain = k % 4;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j< n; j++) {
                sum[i][j] = b[i][j] * round;
            }
        }

        for (int m = 0; m <= remain; m++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    sum[i][j] += a[m][i][j];
                }
            }
        }


        // 打印矩阵
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == n - 1) {
                    cout << sum[i][j] << endl;
                } else {
                    cout << sum[i][j] << " ";
                }
            }
        }

    }
    return 0;
}
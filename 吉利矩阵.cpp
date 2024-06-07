#include<bits/stdc++.h>
using namespace std;

int cal(int sum, int row, int col, vector<vector<int>>& matrix) {
    if (row == 3) {
        bool unsatisfied = false;
        for (int i = 0; i < 3; i++) {
            int sum_row = 0, sum_col = 0;

            for (int j = 0; j < 3; j++) {
                sum_row += matrix[i][j];
                sum_col += matrix[j][i];
            }
            if (sum_row != 5 || sum_col !=5)
                unsatisfied = true;
        }
        if (unsatisfied) return 0;
        else return 1;
    }

    int count = 0;
    // 填充矩阵
    for (int i = 0; i <= sum; i++) {
        matrix[row][col] = i;
        int next_row = row + (col + 1) / 3;
        int next_col = (col + 1) % 3;
        count += cal(sum, next_row, next_col, matrix);
    }
    return count;
}

int main() {
    int sum = 5;
    vector<vector<int>> matrix(3, vector<int>(3));
    int count = cal(sum, 0, 0, matrix);
    cout << count << endl;
    return 0;
}

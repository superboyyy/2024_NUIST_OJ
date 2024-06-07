#include <bits/stdc++.h>
using namespace std;

const int N = 8;
int chessboard[N][N];
bool rowQueen[N] = {false};
bool column[N] = {false};
bool diag1[2*N] = {false}, diag2[2*N] = {false};

bool isAvailable(int m, int n) {
    return !column[n] && !diag1[m + n] && !diag2[m - n + N];
}

int DFS(int m) {
    if (m == N)
        return 1;
    if (rowQueen[m])
        return DFS(m+1);
    int result = 0;
    for (int i = 0; i < N; i++) {
        if (isAvailable(m, i)) {
            column[i] = diag1[m+i] = diag2[m-i+N] = true;   // 在此处放置皇后
            result += DFS(m+1);
            column[i] = diag1[m+i] = diag2[m-i+N] = false;
        }
    }
    return result;
}

int main() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> chessboard[i][j];
            if (chessboard[i][j]) {
                rowQueen[i] = column[j] = true;
                diag1[i + j] = diag2[i - j + N] = true;
            }
        }
    }
   cout << DFS(0) << endl;
}
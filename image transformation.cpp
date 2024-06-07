#include <bits/stdc++.h>
using namespace std;

void calGrey(int N, int M) {
    vector<vector<int>> r(N, vector<int>(M));
    vector<vector<int>> g(N, vector<int>(M));
    vector<vector<int>> b(N, vector<int>(M));
    vector<vector<int>> grey(N, vector<int>(M));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> r[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> g[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            grey[i][j] = (r[i][j] + g[i][j] + b[i][j]) / 3;
            cout << grey[i][j] << (j == M - 1 ? "\n" : ",");
        }
    }

}

int main() {
    int N,M;
    int caseNum = 0;
    while (true) {
        cin >> N >> M;
        if (N ==0 && M == 0) break;

        caseNum++;
        cout << "Case " << caseNum << ":" << endl;

        calGrey(N,M);

    }
    return 0;
}
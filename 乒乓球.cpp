#include<bits/stdc++.h>
using namespace std;

int main() {
    int score[2] = {11, 21};
    vector<int> result(65535, -1);
    int n = 0;


    char res;
    while (cin >> res) {
        if (res == 'E') break;
        else if (res == 'W') result[n++] = 1;   // 1表示小华赢
        else if (res == 'L') result[n++] = 0;   // 0表示小华输
    }

    for (int i = 0; i < 2; i++) {
        int w = 0, l = 0;
        for (int j = 0; j < n; j++) {
            if (result[j] == 1) w++;
            else if (result[j] == 0) l++;

            if (max(w, l) == score[i] && abs(w - l) >= 2) { // 当一个人先达到赛制即获胜
                cout << w << ":" << l << endl;
                w = 0, l = 0;
            }
        }
        cout << w << ":" << l << endl;
        cout << endl;
    }
    return 0;
}
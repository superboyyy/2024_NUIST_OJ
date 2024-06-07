#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    while(cin >> t) {
        while (t--) {
            string s;
            int num, sum = 0;
            cin >> s;
            vector<int> isbn;
            for (int i = 0; i < 13; i++) {
                if (s[i] == '-') {
                    continue;
                }
                num = s[i] - '0';
                isbn.push_back(num);
            }

            // 计算各位和
            for (int i = 0; i < 9; i++) {
                sum += isbn[i] * (i + 1);
            }

            // 取余
            int remain = sum % 11;
            if (remain == 10) {
                if (s[12] == 'X') {
                    cout << "Right" << endl;
                } else {
                    for (int i = 0; i < 12; i++) {
                        cout << s[i];
                    }
                    cout << 'X';
                }
            } else {
                if (remain == isbn[9]) {
                    cout << "Right" << endl;
                } else {
                    for (int i = 0; i < 12; i++) {
                        cout << s[i];
                    }
                    cout << remain;
                }
            }
        }
    }
    return 0;
}
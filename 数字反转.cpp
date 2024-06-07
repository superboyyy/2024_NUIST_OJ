#include<bits/stdc++.h>
using namespace std;

int main() {
    string x;
    while(cin >> x) {
        reverse(x.begin(), x.end());    // 反转该字符串

        int len = x.length();
        if (x[len - 1] == '-') {
            x.erase(len - 1, 1);
            cout << '-';
        }

        while (x[0] == '0' && len > 1) {
            x.erase(0, 1);
        }

        cout << x << endl;

    }
    return 0;

}
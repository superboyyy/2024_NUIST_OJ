#include<bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    while(cin >> a >> b) {
        int as = a.size();
        int bs = b.size();
        vector<int> multi(as + bs);

        for (int i = as - 1; i >= 0; i--) {
            for (int j = bs - 1; j >= 0; j--) {
                int mu = (a[i] - '0') * (b[j] - '0') + multi[i + j + 1];
                multi[i + j + 1] = mu % 10;
                multi[i + j] += mu / 10;
            }
        }

        string res;
        for (int num: multi) {
            if (!(num == 0 && res.empty()))
                res.push_back(num + '0');
        }
        res = res.empty() ? "0" : res;
        cout << res << endl;

    }

    return 0;
}
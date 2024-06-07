#include <bits/stdc++.h>
using namespace std;

int main() {
    string num1, num2;
    while (cin >> num1 >> num2) {
        string res;
        int s1 = num1.size();
        int s2 = num2.size();
        if ((num1.compare(num2) < 0 && s1 <= s2) || s1 < s2) {
            swap(num1, num2);
        }
        s1 = num1.size();
        s2 = num2.size();
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        int minus, borrow = 0;
        for (int i = 0; i < s1; i++) {
            minus = (num1[i] - '0') - borrow;
            if (i < s2)
                minus -= (num2[i] - '0');
            borrow = (minus < 0) ? 1 : 0;
            if (minus < 0)
                minus += 10;
            res.push_back(minus + '0');

        }

        while (res.back() == '0' && res.size() > 1) {
            res.pop_back();
        }
        reverse(res.begin(), res.end());

        cout << res << endl;
    }
    return 0;
}
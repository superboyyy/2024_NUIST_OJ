#include<bits/stdc++.h>
using namespace std;

bool isCyclicNum(string& original, string& result) {
    if (original.size() != result.size())
        return false;
    string num = result + result;
    if (num.find(original) == string::npos)
        return false;
    return true;
}

bool isCyclic(string& original) {
    for (int i = 1; i <= original.size(); i++) {  // 从1开始遍历位数
        string result = original;
        int carry = 0;
        for (int j = original.size() - 1; j >= 0; j--) {
            int res = (original[j] - '0') * i + carry;
            result[j] = (res % 10) + '0';
            carry = res / 10;
        }
        if (carry > 0)
            result = char(carry + '0') + result;
        if (!isCyclicNum(original, result))
            return false;
        }

    return true;
}

int main() {
    string N;
    while (cin >> N) {
        if (isCyclic(N)) {
            cout << N << " is cyclic" << endl;
        } else {
            cout << N << " is not cyclic" << endl;
        }
    }
    return 0;
}
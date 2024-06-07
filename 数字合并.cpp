#include<bits/stdc++.h>
using namespace std;

bool compare(string& a, string b) {
    return a + b > b + a;
}

int main() {
    int n;
    while (cin >> n) {
        vector<string> in;
        string res;
        while (n--) {
            string input;
            cin >> input;
            in.push_back(input);
        }
        sort(in.begin(), in.end(), compare);
        for (string &num: in) {
            res += num;
        }
        cout << res << endl;
    }
    return 0;
}
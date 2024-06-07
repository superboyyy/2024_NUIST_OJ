#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<string> strings(n);
        cin.ignore();
        for (int i = 0; i < n; i++) {
            getline(cin,strings[i]);
        }
        sort(strings.begin(), strings.end());
        for (string& str: strings) {
            cout << str << endl;
        }
    }
    return 0;
}
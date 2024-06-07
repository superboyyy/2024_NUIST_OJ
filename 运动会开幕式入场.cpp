#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<string> countries;
        string country;
        for (int i = 0; i < n; i++) {
            cin >> country;
            if (country == "China")
                continue;
            countries.push_back(country);
        }
        sort(countries.begin(), countries.end());

        for (string& country: countries) {
            cout << country << endl;
        }
        cout << "China" << endl;
    }
    return 0;
}
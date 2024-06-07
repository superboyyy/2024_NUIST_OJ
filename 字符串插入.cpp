#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    string substr;
    while (cin >> str >> substr) {
        char maxASCII = '\0';
        int maxLoc;

        for (int i = 0; i < str.size(); i++) {
            if (str[i] > maxASCII) {
                maxASCII = str[i];
                maxLoc = i;
            }
        }

        string result = str.substr(0, maxLoc + 1) + substr + str.substr(maxLoc + 1);
        cout << result << endl;
    }
    return 0;
}
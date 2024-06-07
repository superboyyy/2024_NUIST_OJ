#include<bits/stdc++.h>
using namespace std;

int outLoc(int N, int w, int s) {
    return (w + s - 1) % N;
}

int main() {
    int N;
    while(cin >> N) {
        vector<string> names(N);
        string name;
        for (int i = 0; i < N; i++) {
            cin >> name;
            names[i] = name;
        }
        int w, s;
        char comma;
        cin >> w >> comma >> s;
        w--;    // 从0开始

        vector<string> result;
        int outLocation = w;
        while (!names.empty()) {
            outLocation = outLoc(names.size(), outLocation, s);
            result.push_back(names[outLocation]);
            names.erase(names.begin() + outLocation);
        }

        for (string &res: result) {
            cout << res << endl;
        }
    }
    return 0;
}
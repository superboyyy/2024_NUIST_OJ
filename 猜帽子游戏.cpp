#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> hats(N);
    for (int i = 0; i < N; i++) {
        cin >> hats[i];
    }
    int K;
    cin >> K;
    while (K--) {
        vector<int> guesses(N);
    bool right = false;
    bool pass = true;
    bool wrong = false;
        for (int j = 0; j < N; j++) {
            cin >> guesses[j];
            if (guesses[j] != 0) {
                pass = false;   // 只要有人猜，那么就一定有对错
                if (guesses[j] != hats[j])
                    wrong = true;
                else
                    right = true;
            }
        }
        if (!wrong && right)
            cout << "Da Jiang!!!" << endl;
        else
            cout << "Ai Ya" << endl;
    }
}
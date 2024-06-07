#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> list(n);
        int i = 0;
        int op;
        for (int j = 0; j < n; j++) {
            cin >> op;
            switch (op) {
                case 1:
                    i++;
                    break;
                case 2:
                    int stuNo;
                    cin >> stuNo;
                    list.insert(list.begin() + i,stuNo);
                    break;
                case 3:
                    list.erase(list.begin() + i);
                    break;
            }

        }
        for (int& stu: list) {
            if (stu != 0)
                cout << stu << " ";
        }
        cout << endl;
    }
}
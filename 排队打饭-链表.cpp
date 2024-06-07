#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int op;
        list<int> list;
        auto i = list.begin();
        for (int j = 0; j < n; j++) {
            cin >> op;
            switch (op) {
                case 1:
                    i++;
                    break;
                case 2:
                    int stuNo;
                    cin >> stuNo;
                    i = list.insert(i, stuNo);
                    break;
                case 3:
                    i = list.erase(i);
                    break;
            }

        }
        for (auto& stu: list) {
            cout << stu << " ";
        }
        cout << endl;
    }
}
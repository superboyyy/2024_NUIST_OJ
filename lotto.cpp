#include<bits/stdc++.h>
using namespace std;

void combination(vector<int> num, vector<int> com, int start, int depth) {
    if (depth == 6) {
        for (int i = 0; i < depth; i++) {
            cout << com[i] << ((i < 5) ? " " : "\n");
        }
        return; // 返回到上一层递归
    }
    for (int i = start; i < num.size(); i++) {
        com[depth] = num[i];
        combination(num, com, i + 1, depth + 1);
    }
}

int main() {
    int k;
    while (cin>>k) {
        vector<int> num(k);
        vector<int> com(6);
        for (int i = 0; i < k; i++) {
            cin >> num[i];
        }

        sort(num.begin(), num.end());

            combination(num, com, 0, 0);

    }
    return 0;
}
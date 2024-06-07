#include <bits/stdc++.h>
using namespace std;

// 用数组实现
int main() {
    int n;
    while (cin >> n) {
        vector<int> people;
        vector<vector<int>> gates(n);
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            people.push_back(num);
        }
        for (int j = 0; j < people.size(); j++) {
            while (people[j]--) {
                int citizenId;
                cin >> citizenId;
                gates[j].push_back(citizenId);
            }
        }
        int k;
        cin >> k;
        for (int i = 0; i < k; i++) {
            int creatureId;
            cin >> creatureId;
            int gateId;
            cin >> gateId;
            gateId--;
            gates[gateId].emplace(gates[gateId].begin(), creatureId);
        }
        for (auto & gate : gates) {
            for (auto& id: gate) {
                cout << id << " ";
            }
            cout << endl;
        }

    }
    return 0;
}
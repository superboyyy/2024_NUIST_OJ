#include <bits/stdc++.h>
using namespace std;
struct People {
    int id, income, packets;
    People(int id): id(id){}
};

bool cmp(People& a, People& b) {
    if (a.income != b.income) return a.income > b.income;
    if (a.packets != b.packets) return a.packets > b.packets;
    return a.id < b.id;
}

int main() {
    int n;
    cin >> n;

    vector<People> packets;
    for (int i = 1; i <= n; i++) {
        packets.push_back(People(i));
    }

    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int ni;
            cin >> ni;
            int pi;
            cin >> pi;
            packets[i - 1].income -= pi;
            packets[ni - 1].income += pi;
            packets[ni - 1].packets++;
        }
    }

    sort(packets.begin(), packets.end(), cmp);

    for (People& person: packets) {
        cout << person.id << " " << person.income / 100.0 << endl;
    }
    return 0;
}
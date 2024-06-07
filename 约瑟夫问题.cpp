#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m = 0;
    int count = 0;
    while (cin >> n >> m) {
//        if (n > 100 || m > 100)
//            return -1;
        vector<int> people;
        for (int i = 0; i < n; i++) {
            people.push_back(i + 1);
        }
        while (!people.empty()) {
            count = (count + m - 1) % people.size();
            if (people.size() > 1) {
                cout << people[count] << " ";
            } else {
                cout << people[count];
            }
            people.erase(people.begin() + count);
        }
        people.clear();
    }
    return 0;
}


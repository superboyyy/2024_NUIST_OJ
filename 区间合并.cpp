#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    bool enter = false;
    while (cin >> n) {
        if (enter)
            cout << endl;
        vector<pair<int, int>> intervals(n);

        for (int i = 0; i < n; i++) {
            cin >> intervals[i].first >> intervals[i].second;
        }

        sort(intervals.begin(), intervals.end());

        vector<pair<int, int>> merged;
        int start = intervals[0].first, end = intervals[0].second;

        for (int i = 0; i < n; i++) {
            if (end >= intervals[i].first)
                end = max(end, intervals[i].second);
            else {
                merged.emplace_back(start, end);
                start = intervals[i].first;
                end = intervals[i].second;
            }
        }
        merged.emplace_back(start, end);

        for (pair<int, int>& merge:merged) {
            cout << merge.first << " " << merge.second << endl;
        }
        enter = true;
    }
}
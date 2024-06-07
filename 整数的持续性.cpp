#include <bits/stdc++.h>

using namespace std;

int calPersistence(int num) {
    int count = 0;
    while (num >= 10) {
        int temp = 1;
        while (num > 0) {
            temp *= num % 10;
            num /= 10;
        }
        num = temp;
        count++;
    }
    return count;
}

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> maxPersistenceNumber;
    int maxPersistence = 0;
    for (int i = a; i <= b; i++) {
        if (calPersistence(i) > maxPersistence) {
            maxPersistence = calPersistence(i);
            maxPersistenceNumber.clear();
            maxPersistenceNumber.push_back(i);
        } else if (calPersistence(i) == maxPersistence) {
            maxPersistenceNumber.push_back(i);
        }
    }
    cout << maxPersistence << endl;
    for (int i = 0; i < maxPersistenceNumber.size(); i++) {
        if (i > 0)
            cout << " ";
        cout << maxPersistenceNumber[i];
    }
    cout << endl;
    return 0;
}
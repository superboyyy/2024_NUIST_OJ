#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n == 0) return false;
    if (n == 1) return false;
    if (n %2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int meisen = pow(2, i) - 1;
        if(isPrime(meisen)) {
            cout << meisen << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "None" << endl;
    return 0;
}

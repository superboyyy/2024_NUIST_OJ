#include<bits/stdc++.h>
using namespace std;

int power(int a, int b) {   // 快速幂算法
    int result = 1;
    a %= 10000;
    while (b > 0) {
        if (b % 2 == 1)
            result = (result * a) % 10000;
        b /= 2;
        a = (a * a) % 10000;
    }
    return result;
}

int main() {
    int N;
    int a,b;
    int sum;
    while (cin >> N) {
        cin >> a >> b;
        for (int i = 1; i <= a; i++) {
            sum = (sum + power(i,b)) % 10000;
        }
        cout << sum << endl;
    }
}
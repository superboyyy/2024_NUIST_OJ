#include <iostream>

using namespace std;

bool check(int m, int k) {  // 有m个好人和m个坏人，k为实验值
    int p = 0;  // p为死亡人的位置
    for (int i = 2 * m; i > m; i--) {
        p = (p + k - 1) % i;
        if (p < m) {
            return false;   // p不能为好人
        }
    }
    return true; // 坏人都死了，返回true
}

int main() {
    int m;
    while (cin >> m) {
        if (m < 1 || m > 12) {
            return 999999999;
        }
        int k = 1;
        while (!check(m, k)) {
            k++;
        }
        cout << k << endl;
    }
    return 0;
}

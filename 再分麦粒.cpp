#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> a(500, 0);  //设定500位，初始化为0
        a[0] = 1;   //先放一粒
        int l = 1;  //长度，初始长度为1
        while (n--) {
            for (int i = 0; i < l; i++) {
                a[i] *= 2;  //将每一位都翻倍
            }
            for (int i = 0; i < l; i++) {   //处理进位
                a[i + 1] += a[i] / 10;
                a[i] %= 10;
            }
            for (; a[l] && l < 500; l++) {  //处理长度
                a[l + 1] += a[l] / 10;
                a[l] %= 10;
            }
        }
        a[0]--;
        for (int j = 499; j >= 0; j--) {
            cout << a[j];
        }
        cout << endl;
    }
    return 0;
}
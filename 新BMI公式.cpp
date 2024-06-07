#include <bits/stdc++.h>
using namespace std;

int main() {
    double n,L;
    cin >> n >> L;
        double BMI;
        BMI = n / pow(L,2);
        cout << fixed << setprecision(1);   // 精度设定
        cout << BMI << endl;
        if (BMI > 25)
            cout << "PANG" << endl;
        else
            cout << "Hai Xing" << endl;

    return 0;
}
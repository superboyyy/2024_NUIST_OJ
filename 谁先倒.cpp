#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,N;
    cin >> n >> m >> N;
    int a_count = 0, b_count = 0;
    for (int i = 0; i < N; i++) {
        int a1,a2,b1,b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int sum = a1 + b1;
        if (a2 != sum && b2 != sum) continue;
        else if (a2 == sum && b2 == sum) continue;
        else if (a2 == sum && b2 != sum)  {
            a_count++;
            if (a_count > n) {
                cout << "A" << endl << b_count << endl;
                break;
            }
        }
        else if (b2 == sum && a2 != sum) {
            b_count++;
            if (b_count > m) {
                cout << "B" << endl << a_count << endl;
                break;
            }
        }
    }
    return 0;
}
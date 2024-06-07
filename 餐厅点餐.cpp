#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a,b,c,d,e;
        int min, max;
        cin >> a >> b >> c >> d >> e;
        vector<int> soup(a);
        vector<int> rice(b);
        vector<int> noodles(c);
        vector<int> meat(d);
        vector<int> vegetables(e);
        for (int i = 0; i < a; i++) cin >> soup[i];
        for (int i = 0; i < b; i++) cin >> rice[i];
        for (int i = 0; i < c; i++) cin >> noodles[i];
        for (int i = 0; i < d; i++) cin >> meat[i];
        for (int i = 0; i < e; i++) cin >> vegetables[i];
        cin >> min >> max;

        int count = 0;
        for (int i = 0; i < d; i++) {
            for (int j = i; j < d; j++) {
                int sum_meat = j == i ? meat[i] : meat[i] + meat[j];
                for (int k = 0; k < e; k++) {
                    for (int l = k; l < e; l++) {
                        int sum_vege = l == k ? vegetables[k] : vegetables[k] + vegetables[l];
                        int sum_mv = sum_meat + sum_vege;

                        // 心情好
                        for (int m = 0; m < b; m++) {
                            for (int n = 0; n < a; n++) {
                                int sum_rs = rice[m] + soup[n];
                                int sum = sum_mv + sum_rs;
                                if (sum >= min && sum <= max) count++;
                            }
                        }

                        // 心情不好
                        for (int o = 0; o < c; o++) {
                            int sum_n = noodles[o];
                            int sum = sum_mv + sum_n;
                            if (sum >= min && sum <= max) count++;
                        }
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
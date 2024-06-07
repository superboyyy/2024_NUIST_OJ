#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string num1, num2, sum;
        int carry = 0;
        cin >> num1 >> num2;
        int n1 = num1.size();
        int n2 = num2.size();


        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        for (int i = 0; i < n1 || i < n2; i++) {
            int sumi = carry;
            if (i < n1)
                sumi += num1[i] - '0';
            if (i < n2)
                sumi += num2[i] - '0';
            sum.push_back((sumi % 10) + '0');
            carry = sumi / 10;
        }
        if (carry)
            sum.push_back(carry + '0');

        reverse(sum.begin(), sum.end());

        cout << sum << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

string speaktime(int num) {
    if (num >= 0 && num <= 20) {
        string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven",
                          "eight", "nine", "ten", "eleven", "twelve", "thirteen",
                          "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
                          "nineteen", "twenty"};
        return words[num];
    } else {
        int ge = num % 10;
        string tens[] = {"", "", "twenty","thirty", "forty", "fifty"};
        if (ge == 0) return tens[ge];
        else {
            int ten = num / 10;
            return tens[ten] + " " + speaktime(ge);
        }
    }
}

int main() {
    int h,m;
    while (cin >> h >> m) {
        string hour = speaktime(h);
        string min = (m == 0 ? "o'clock" : speaktime(m));

        cout << hour << " " << min << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

double timeZone(string s)
{
    if (s == "UTC")	return 0.0;
    if (s == "GMT")	return 0.0;
    if (s == "BST")	return 1.0;
    if (s == "IST")	return 1.0;
    if (s == "WET")	return 0.0;
    if (s == "WEST") return 1.0;
    if (s == "CET")	return 1.0;
    if (s == "CEST") return 2.0;
    if (s == "EET")	return 2.0;
    if (s == "EEST") return 3.0;
    if (s == "MSK")	return 3.0;
    if (s == "MSD")	return 4.0;
    if (s == "AST")	return -4.0;
    if (s == "ADT")	return -3.0;
    if (s == "NST")	return -3.5;
    if (s == "NDT")	return -2.5;
    if (s == "EST")	return -5.0;
    if (s == "EDT")	return -4.0;
    if (s == "CST")	return -6.0;
    if (s == "CDT")	return -5.0;
    if (s == "MST")	return -7.0;
    if (s == "MDT")	return -6.0;
    if (s == "PST")	return -8.0;
    if (s == "PDT")	return -7.0;
    if (s == "HST")	return -10.0;
    if (s == "AKST") return -9.0;
    if (s == "AKDT") return -8.0;
    if (s == "AEST") return 10.0;
    if (s == "AEDT") return 11.0;
    if (s == "ACST") return 9.5;
    if (s == "ACDT") return 10.5;
    if (s == "AWST") return 8.0;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int t;
        string currentTime;
        string ampm;
        cin >> currentTime;
        if (currentTime[0] == 'n') {
            t = 12 * 60;
        } else if (currentTime[0] == 'm') {
            t = 24 * 60;
        } else {
            if (currentTime[1] == ':') {
                t = (currentTime[0] - '0') * 60 + (currentTime[2] - '0') * 10 + (currentTime[3] - '0') * 1;
            } else {
                t = (currentTime[0] - '0') * 600 + (currentTime[1] - '0') * 60 + (currentTime[3] - '0') * 10 +
                    (currentTime[4] - '0') * 1;
            }
            if (t / 60 == 12)
                t -= 60 * 12;
            cin >> ampm;
            if (ampm[0] == 'p') {
                t += 12 * 60;
            }
        }

        string currentZone, needZone;
        cin >> currentZone >> needZone;
        t += (int)((timeZone(needZone) - timeZone(currentZone)) * 60);
        if (t <= 0) {
            t += 24 * 60;
        }
        if (t > 1440) {
            t -= 24 * 60;
        }

        if (t == 24 * 60) {
            cout << "midnight" << endl;
        } else if (t == 720) {
            cout << "noon" << endl;
        } else {
            ampm = "a.m.";
            if (t > 720) {
                t -= 720;
                ampm[0] = 'p';
            }
            if (t < 60)
                t += 12 * 60;
            cout << t / 60 << ":" << (t % 60 < 10 ? "0" : "") << t % 60 << " " << ampm << endl;


        }
    }
    return 0;

}
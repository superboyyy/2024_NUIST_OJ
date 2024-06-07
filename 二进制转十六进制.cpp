#include <iostream>
using namespace std;

int main() {
    string binary;
    while(cin >> binary) {
        if (binary == "0") {
            break;
        }

        int decimal = stoi(binary, nullptr, 2);

        cout << hex << uppercase << decimal << endl;
    }
    return 0;
}
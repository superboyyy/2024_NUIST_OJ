#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 检查子串是否为另一个字符串的子串或者反转后的子串
bool isSubstrOrReverse(const string &sub, const string &str) {
    // 直接查找子串
    if (str.find(sub) != string::npos) return true;
    // 反转子串再查找
    string revSub = sub;
    reverse(revSub.begin(), revSub.end());
    if (str.find(revSub) != string::npos) return true;
    return false;
}

int main() {
    int t; // 测试用例数
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> strs(n);
        for (int i = 0; i < n; ++i) cin >> strs[i]; // 读取所有字符串

        int maxLength = 0;
        for (int i = 0; i < n; ++i) { // 遍历所有字符串，作为子串来源
            for (size_t len = 1; len <= strs[i].size(); ++len) { // 枚举所有可能的子串长度
                for (size_t start = 0; start + len <= strs[i].size(); ++start) { // 枚举所有可能的子串起始位置
                    string sub = strs[i].substr(start, len);
                    bool valid = true;
                    for (int j = 0; j < n; ++j) { // 检查每一个子串是否满足条件
                        if (!isSubstrOrReverse(sub, strs[j])) {
                            valid = false;
                            break;
                        }
                    }
                    if (valid) maxLength = max(maxLength, (int)len); // 更新最长子串的长度
                }
            }
        }

        cout << maxLength << endl; // 输出结果
    }
    return 0;
}
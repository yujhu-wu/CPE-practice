#include <iostream>
using namespace std;

int main() {
    int t;  // 测试用例数量
    cin >> t;

    while (t--) {
        int n, p;  // 总天数和罢工日期的数量
        cin >> n >> p;

        bool days[3651] = { false }; // 用来记录哪些天数已经被计算过，假设 n 最大为 3650
        int hi = 0;

        for (int i = 0; i < p; ++i) {
            int h;  // 罢工日期
            cin >> h;

            for (int j = h; j <= n; j += h) {
                if (j % 7 != 0 && j % 7 != 6 && !days[j]) { // 排除星期五和星期六，并且只计算一次
                    days[j] = true;
                    hi++;
                }
            }
        }

        cout << hi << endl;  // 输出最终罢工几天
    }

    return 0;
}

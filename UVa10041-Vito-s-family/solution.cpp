#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;  // 测试用例数量
    cin >> t;

    while (t--) {
        int r;  // 整数的个数
        cin >> r;

        int numbers[500];

        // 输入整数
        for (int i = 0; i < r; ++i) {
            cin >> numbers[i];
        }

        // 排序
        sort(numbers, numbers + r);

        // 计算中位数
        int median;
        if (r % 2 == 0) {
            median = (numbers[r / 2] + numbers[r / 2 - 1]) / 2;
        } else {
            median = numbers[r / 2];
        }

        // 计算曼哈顿距离之和
        int distanceSum = 0;
        for (int i = 0; i < r; ++i) {
            distanceSum += abs(numbers[i] - median);
        }
        //abs為取絕對值

        // 输出结果
        cout << distanceSum << endl;
    }

    return 0;
}

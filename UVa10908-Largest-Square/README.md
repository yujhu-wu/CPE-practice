# UVa 10908 – Largest Square

> CPE一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10908(PDF)](https://onlinejudge.org/external/109/10908.pdf) |
| CPE出題年份 | 2012、2015 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法([solution.cpp](solution.cpp))

```cpp
#include <iostream>
using namespace std;

const int MAX_N = 100; // 最大矩陣大小

int main() {
    int t;
    cin >> t; 
    while (t--) { 
        int m, n, q;
        cin >> m >> n >> q; 
        char grid[MAX_N][MAX_N];

        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                cin >> grid[i][j];

        cout << m << " " << n << " " << q << endl; 

        while (q--) { 
            int x, y;
            cin >> x >> y; 
            int len = 1; // 初始化正方形边长为1
            char target = grid[x][y]; // 目标字符为查询坐标的字符

            while (x - len >= 0 && x + len < m && y - len >= 0 && y + len < n) { // 检查是否可以继续扩展
                bool valid = true;
                // 在四个方向上检查正方形是否由相同字符组成
                for (int i = x - len; i <= x + len; ++i) {
                    if (grid[i][y - len] != target || grid[i][y + len] != target) {
                        valid = false;
                        break;
                    }
                }
                for (int j = y - len; j <= y + len; ++j) {
                    if (grid[x - len][j] != target || grid[x + len][j] != target) {
                        valid = false;
                        break;
                    }
                }
                if (!valid) break; // 如果不满足条件，退出循环
                ++len; // 更新正方形边长
            }
            cout << 2 * len - 1 << endl; // 输出最大正方形的边长
        }

    }
    return 0;
}
```

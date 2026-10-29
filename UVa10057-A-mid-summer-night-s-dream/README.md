# UVa 10057 – A mid-summer night’s dream

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10057（PDF）](https://onlinejudge.org/external/100/10057.pdf) |
| CPE 出題年份 | 未曾出現 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法（[solution.cpp](solution.cpp)）

```cpp
/*
1.求最小中位數
2.求中位數個數
3.計算兩個中位數間存在多少個整數
(偶數會有最小和最大中位數，1求最小符合題目算式，2只要等於最大或最小都+1)
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int x[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> x[i];
        }

        sort(x, x + n);

        int minmid = x[(n - 1) / 2];
        int maxmid = x[n / 2];

        int counter = 0;
        for (int i = 0; i < n; i++)
        {
            if (x[i] >= minmid && x[i] <= maxmid)
            {
                counter++;
            }
        }
        int ans = maxmid - minmid + 1;

        cout << minmid << " " << counter << " " << ans << endl;
    }
    return 0;
}
```

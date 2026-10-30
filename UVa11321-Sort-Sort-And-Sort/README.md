# UVa 11321 – Sort! Sort! And Sort!!!

> CPE一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 11321(PDF)](https://onlinejudge.org/external/113/11321.pdf) |
| CPE出題年份 | 2018 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法([solution.cpp](solution.cpp))

```cpp
#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
// 自定義比較函數，用於排序
bool cmp(int a, int b)
{
    if (a % m != b % m) // 若餘數不同，則以餘數升序排列
        return a % m < b % m;
    else if (a % 2 != 0 && b % 2 == 0) // 餘數相同時，若都是奇數，則以降序排列
        return true;
    else if (a % 2 == 0 && b % 2 != 0) // 餘數相同時，若都是偶數，則以升序排列
        return false;
    else if (a % 2 != 0) // 餘數相同時，若都是奇數或都是偶數，則以值降序排列
        return a > b;
    else
        return a < b;
}

int main() {
    while (cin >> n >> m)
    {
        if(n == 0 && m == 0)
        {
            cout << "0 0" << endl;
            break;
        }
        int number[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> number[i];
        }
        // 使用自定義的比較函數進行排序
        sort(number, number + n, cmp);
        cout << n << " " << m << endl;
        for (int i = 0; i < n; ++i)
        {
            cout << number[i] << endl;
        }
    }
    return 0;
}
```

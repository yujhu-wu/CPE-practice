# UVa 10071 – Back to High School Physics

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10071（PDF）](https://onlinejudge.org/external/100/10071.pdf) |
| CPE 出題年份 | 2017 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法（[solution.cpp](solution.cpp)）

```cpp
#include <iostream>

using namespace std;

int main()
{
    int v, t;
    while(cin >> v >> t)
    {
        cout << 2 * v * t << endl;
    }
    return 0;
}
```

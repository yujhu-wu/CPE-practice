# UVa 11461 – Square Numbers

> CPE一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 11461(PDF)](https://onlinejudge.org/external/114/11461.pdf) |
| CPE出題年份 | 2025 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法([solution.cpp](solution.cpp))

```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, sq;

    while(cin >> a >> b)
    {
        if(a == 0 && b == 0)
        {
            break;
        }

        int counter = 0;

        for(int i = a; i <= b; ++i)
        {
            sq = sqrt(i); //因為是整數型態所以開根號後也是整數,所以再乘回來不一定會是原本的數
            if(sq * sq == i)
            {
                counter++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}
```

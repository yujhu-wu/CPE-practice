# UVa 11934 – Magic Formula

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 11934（PDF）](https://onlinejudge.org/external/119/11934.pdf) |
| CPE 出題年份 | 2023 |
| Online Judge | 尚未通過 |
| 語言 | C++ |

## 解法（[solution.cpp](solution.cpp)）

```cpp
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, L, count;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &L);
    while(a != 0 || b != 0 || c != 0 || d != 0 || L != 0)
    {
        count = 0;
        for(int i = 0; i <= L; i++)
        {
            if((a * i * i + b * i + c) % d == 0)
            {
                ++count;
            }
        }
        printf("%d", count);
        scanf("%d%d%d%d%d", &a, &b, &c, &d, &L);
    }
    return 0;
}
```

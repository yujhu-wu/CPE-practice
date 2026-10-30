# UVa 10055 – Hashmat the brave warrior

> CPE一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10055(PDF)](https://onlinejudge.org/external/100/10055.pdf) |
| CPE出題年份 | 未曾出現 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法([solution.cpp](solution.cpp))

```cpp
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a, b;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
      if(a>b)printf("%lld\n",a-b);
      else printf("%lld\n",b-a);
    }


    return 0;
}
```

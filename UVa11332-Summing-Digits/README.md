# UVa 11332 – Summing Digits

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 11332（PDF）](https://onlinejudge.org/external/113/11332.pdf) |
| CPE 出題年份 | 2012、2015、2022 |
| Online Judge | ✅ Accepted |
| 語言 | C |

## 解法（[solution.c](solution.c)）

```c
#include <stdio.h>

int main() {
    int a = 0;

    while (scanf("%d", &a) == 1 && a) {
        while (a >= 10) {
            int temp = 0;
            while (a > 0) {
                temp += a % 10;
                a /= 10;
            }
            a = temp;
        }
        printf("%d\n", a);
    }

    return 0;
}
```

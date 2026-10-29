# UVa 10783 – Odd Sum

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10783（PDF）](https://onlinejudge.org/external/107/10783.pdf) |
| CPE 出題年份 | 2014 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法（[solution.cpp](solution.cpp)）

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n, counter = 1;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        if(a > b)
        {
            int c = a;
            a = b;
            b = c;
        }
        int sum = 0;
        for(int i = a; i <= b; i++)
        {
            if(i % 2 == 1) sum += i;
        }
        cout << "Case " << counter << ": " << sum << endl;
        counter++;
    }
    return 0;
}
```

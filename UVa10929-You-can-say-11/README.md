# UVa 10929 – You can say 11

> CPE一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10929(PDF)](https://onlinejudge.org/external/109/10929.pdf) |
| CPE出題年份 | 2011 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法([solution.cpp](solution.cpp))

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    while(cin >> n)
    {
        if(n == "0") break;
        int sum = 0, odd = 0, even = 0;

        for(int i = 0; i < n.length(); i++)
        {
            if(i % 2 == 1) odd = odd +(n[i] - '0');
            if(i % 2 == 0) even = even + (n[i] - '0');
        }
        sum = odd - even;
        if(sum % 11 == 0) cout << n << " is a multiple of 11." << endl;
        else cout << n << " is not a multiple of 11." << endl;
    }
    return 0;
}
```

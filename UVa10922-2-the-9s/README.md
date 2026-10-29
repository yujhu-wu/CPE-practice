# UVa 10922 – 2 the 9s

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10922（PDF）](https://onlinejudge.org/external/109/10922.pdf) |
| CPE 出題年份 | 2015 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法（[solution.cpp](solution.cpp)）

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n, m;
    while(cin >> n && n != "0")
    {
        int sum = 0, degree = 0;
        for(int i = 0; i < n.length(); i++)
        {
            sum = sum + (n[i] - '0');
        }
        while(sum != 0 && sum != 9 && sum % 9 == 0)
        {
            degree++;
            m = to_string(sum); // 將sum轉成字串，以便繼續計算
            sum = 0;
            for(int i = 0; i < m.length(); i++)
            {
                sum = sum + (m[i] - '0');
            }
        }
        if(sum == 9) degree++;

        if(degree == 0) cout << n << " is not a multiple of 9." << endl;
        else cout << n << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
    }
    return 0;
}
```

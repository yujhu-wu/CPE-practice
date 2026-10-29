# UVa 11063 – B2-Sequence

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 11063（PDF）](https://onlinejudge.org/external/110/11063.pdf) |
| CPE 出題年份 | 2012 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法（[solution.cpp](solution.cpp)）

```cpp
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    int counter = 1;
    while(cin >> n)
    {
        int number[n] = {0};
        set<int> d;
        d.clear();

        for(int i = 0; i < n; i++)
        {
            cin >> number[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(number[i] < 1) break;
            else if(number[i - 1] >= number[i] && i - 1 > 0) break;
            for(int j = i; j < n; j++)
            {
                d.insert(number[i] + number[j]);
            }
        }
        if(d.size() == (n + 1) * n / 2) cout << "Case #" << counter << ": It is a B2-Sequence." << endl;
        else cout << "Case #" << counter << ": It is not a B2-Sequence." << endl;
        cout << endl; //要換兩行
        counter++;
    }
    return 0;
}
```

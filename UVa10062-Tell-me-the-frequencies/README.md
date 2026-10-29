# UVa 10062 – Tell me the frequencies!

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10062（PDF）](https://onlinejudge.org/external/100/10062.pdf) |
| CPE 出題年份 | 2016 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法（[solution.cpp](solution.cpp)）

```cpp
#include <iostream>

using namespace std;

int main()
{
    string s;
    bool first = true;
    while(getline(cin, s))
    {
        if(!first) cout << endl; // 處理輸出格式，每組輸出之間插入空行
        first = false;
        
        int counter[128] = {0};
        for(int i = 0; i < s.length(); i++)
        {
            counter[s[i]]++;
        }
        for(int i = 1; i <= s.length(); i++) // 將迴圈的終止條件修正為 s.length()
        {
            for(int j = 127; j >= 32; j--)
            {
                if(counter[j] == i) // 移除 counter[j] != 0 的條件
                {
                    cout << j << " " << i << endl;
                }
            }
        }
    }
    return 0;
}
```

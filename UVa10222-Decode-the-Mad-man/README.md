# UVa 10222 – Decode the Mad man

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10222（PDF）](https://onlinejudge.org/external/102/10222.pdf) |
| CPE 出題年份 | 2021 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法（[solution.cpp](solution.cpp)）

```cpp
#include <iostream>

using namespace std;

int main()
{
    string input = "234567890-=ertyuiop[]\\dfghjkl;'cvbnm,./";
    string output = "`1234567890qwertyuiop[asdfghjklzxcvbnm,";

    string a;
    while(getline(cin, a))
    {
        for(int i = 0; i < a.length(); i++)
        {
            char c = a[i];
            if(c == ' ') cout << " ";
            else
            {
                c = tolower(c);
                for(int j = 0; j < input.length(); j++)
                {

                    if(c == input[j]) cout << output[j];
                }
            }
        }
        cout << endl;
    }
    return 0;
}
```

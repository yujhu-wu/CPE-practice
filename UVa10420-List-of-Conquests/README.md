# UVa 10420 – List of Conquests

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10420（PDF）](https://onlinejudge.org/external/104/10420.pdf) |
| CPE 出題年份 | 2019 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法（[solution.cpp](solution.cpp)）

```cpp
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    string country, name;
    map<string, int> counter;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> country;
        getline(cin, name);
        counter[country]++;
    }
    for(auto it = counter.begin(); it != counter.end(); it++)
    {
        cout << it -> first << " " << it-> second << endl;
    }
    return 0;
}
```

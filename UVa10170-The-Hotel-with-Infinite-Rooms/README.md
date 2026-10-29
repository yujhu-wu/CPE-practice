# UVa 10170 – The Hotel with Infinite Rooms

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10170（PDF）](https://onlinejudge.org/external/101/10170.pdf) |
| CPE 出題年份 | 2012 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法（[solution.cpp](solution.cpp)）

```cpp
#include <iostream>
using namespace std;

int main()
{
    long long int s, d;
    while(cin >> s >> d){
        long long int ans, counter=0;
        for(long long int i = s; i <= d; i++){
            counter += i;
            if(counter >= d && d > 0){
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
```

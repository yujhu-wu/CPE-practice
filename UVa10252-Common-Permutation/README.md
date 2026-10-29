# UVa 10252 – Common Permutation

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10252（PDF）](https://onlinejudge.org/external/102/10252.pdf) |
| CPE 出題年份 | 未曾出現 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法（[solution.cpp](solution.cpp)）

```cpp
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string a;
    string b;

    while(getline(cin, a) && getline(cin, b)){
        string common; //儲存共同的字母
        int i = 0, j = 0;

        //將字母由小到大排列
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        while(i < a.length() && j < b.length()){
            if(a[i] == b[j]){
                common += a[i];
                i++;
                j++;
            }else if(a[i] < b[j]){
                i++;
            }else{
                j++;
            }
        }
        cout << common << endl;
    }
    return 0;
}
```

# UVa 11417 – GCD

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 11417（PDF）](https://onlinejudge.org/external/114/11417.pdf) |
| CPE 出題年份 | 2019 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法（[solution.cpp](solution.cpp)）

```cpp
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int GCD(int i, int j)
{
    if(j % i == 0){
        return i;
    }
    else{
        return GCD(j % i, i);
    }
}

int main()
{
    int n, g;
    while((cin >> n) && (n != 0)){
		    g = 0;
        for(int  i = 1; i < n; i++){
            for(int j = i + 1; j <= n; j++){
                g += GCD(i, j);
            }
        }
        printf("%d\n", g);
    }
    return 0;
}
```

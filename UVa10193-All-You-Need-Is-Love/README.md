# UVa 10193 – All You Need Is Love

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10193（PDF）](https://cpe.cse.nsysu.edu.tw/cpe/file/attendance/problemPdf/10193.pdf) |
| CPE 出題年份 | 2012 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法（[solution.cpp](solution.cpp)）

```cpp
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S1, S2;
    cin >> N;
    for (int Case = 1; Case <= N; Case++){
        cin >> S1 >> S2;
        int n1 = 0, n2 = 0;
        for (int i = 0; i < S1.size(); i++){
            n1 *= 2;
            n1 += S1[i] - '0';
        }
        for (int i = 0; i < S2.size(); i++){
            n2 *= 2;
            n2 += S2[i] - '0';
        }
        cout << "Pair #" << Case;
        if (__gcd(n1, n2) > 1) cout << ": All you need is love!\n";
        else cout << ": Love is not all you need!\n";
    }
    return 0;
}
```

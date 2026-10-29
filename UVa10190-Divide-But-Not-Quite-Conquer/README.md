# UVa 10190 – Divide, But Not Quite Conquer!

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10190（PDF）](https://onlinejudge.org/external/101/10190.pdf) |
| CPE 出題年份 | 2013、2022 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法（[solution.cpp](solution.cpp)）

```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int n, m;
    while(cin >> n >> m){
        long long int cn = m;
        for(int i = 1; cn < n && m > 1; i++){
            cn = pow(m, i);
        }
        if(cn > n || m <= 1){
            cout << "Boring!" << endl;
        }
        else{
            while(cn > 0){
                cout << cn;
                if(cn != 1){
                    cout << " ";
                }
                else{
                    cout << endl;
                }
                cn /= m;
            }
        }
    }
    return 0;
}
```

# UVa 10812 – Beat the Spread!

> CPE一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10812(PDF)](https://onlinejudge.org/external/108/10812.pdf) |
| CPE出題年份 | 未曾出現 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法([solution.cpp](solution.cpp))

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--){
        int s, d;
        cin >> s >> d;

        int a, b;
        a = (s + d) / 2;
        b = (s - d) / 2;

        if((s + d) % 2 == 1 || (s - d) % 2 == 1 || a < 0 || b < 0){
            cout << "impossible" << endl;
        }else{
            cout << a << " " << b << endl;
        }
        /*這樣寫也行
        if((a + b == s && a - b == d) && b >= 0){ 
					cout << a << " " << b << endl;
				}else{
					cout << "impossible" << endl;
				}
				*/
    }
    return 0;
}
```

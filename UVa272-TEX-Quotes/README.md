# UVa 272 – TEX Quotes

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 272（PDF）](https://onlinejudge.org/external/2/272.pdf) |
| CPE 出題年份 | 2011 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法（[solution.cpp](solution.cpp)）

```cpp
#include <iostream>
#include <string>
using namespace std;

int main(){
    string tmp;
    int length;
    int count = 0;

    while (getline(cin, tmp)){
        length = tmp.length();

        for (int i = 0; i < length; i++){
            if (tmp[i] == '\"'){
                count++;

                if (count % 2 == 1){ // left-double-quote
                    cout << "``";
                } else {
                    cout << "''"; // right-double-quote
                }
            } else {
                cout << tmp[i];
            }  
        }
        cout << endl;
    }
    return 0;
}
```

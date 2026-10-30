# UVa 490 – Rotating Sentences

> CPE一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 490(PDF)](https://onlinejudge.org/external/4/490.pdf) |
| CPE出題年份 | 2015 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法([solution.cpp](solution.cpp))

```cpp
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s[101];
    int index = 0;
    int max = 0;

    while (getline(cin, s[index])) {
        if (max < s[index].length()){ // find out the max length of strings
            max = s[index].length();
        }
        index++;
    }

    for (int i = 0; i < max; i++){
        for (int j = index-1; j >= 0; j--){
            if (s[j].length() > i){
                cout << s[j][i];
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
```

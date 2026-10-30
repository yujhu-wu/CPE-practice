# UVa 10008 – What’s Cryptanalysis

> CPE一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10008(PDF)](https://onlinejudge.org/external/100/10008.pdf) |
| CPE出題年份 | 2011 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法([solution.cpp](solution.cpp))

```cpp
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n, temp;
    int letter[26] = {0};
    int maxIndex;
    char maxLetter;
    string str = " ";
    string tmpStr;

    cin >> n;
    tmpStr = "\n";
    
    for (int i = 0; i <= n; i++){  
        getline(cin, tmpStr);
        transform(tmpStr.begin(), tmpStr.end(), tmpStr.begin(), ::tolower); // transfer upper letter to lower
        str += tmpStr; 
    }

    sort(str.begin(), str.end());

    for (int i = 0; i < str.length(); i++){
        if (str[i] < 97 || str[i] > 122){ // str[i][j] is not letter(a~z)
            continue;
        }
        temp = (int)str[i] - 97;
        letter[temp]++;
    }

    for (int i = 0; i < 26; i++){
        maxIndex = max_element(letter, letter+26) - letter;
        maxLetter = 'A' + maxIndex;
        if (letter[maxIndex] == 0){
            break;
        }
        cout << maxLetter << " " << letter[maxIndex] << endl;
        letter[maxIndex] = 0;
    }

    return 0;
}
```

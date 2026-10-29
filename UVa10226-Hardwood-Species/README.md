# UVa 10226 – Hardwood Species

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10226（PDF）](https://onlinejudge.org/external/102/10226.pdf) |
| CPE 出題年份 | 未曾出現 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法（[solution.cpp](solution.cpp)）

```cpp
#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int n, total = 0; 
    string name;
    map<string, double> tree_data; // 使用 map 容器儲存樹木名稱及對應的數量，數量為雙精度浮點型

    cin >> n;
    cin.ignore(); // 忽略之前的輸入緩衝區中的換行符等字符
    getline(cin, name);
    while (n--)
    {
        while (getline(cin, name) && name != "") // 在每個種類的循環中，讀取每種樹木的名稱，直到遇到空行為止
        {
            tree_data[name]++; // 將讀取的樹木名稱作為鍵，在 tree_data 容器中進行查找，如果已存在則將對應的值加1，否則創建該鍵，對應的值初始化為1
            total++; // 統計總共讀取的樹木數量
        }
        for (auto it = tree_data.begin(); it != tree_data.end(); it++) // 開始一個迴圈，遍歷 tree_data 容器中的樹木名稱及其數量
        {
            cout << it->first << " " << fixed << setprecision(4) << it->second / total * 100 << endl; // 輸出每個樹木的名稱及該種樹木在總數中所佔的百分比
        }
        if(n != 0) // 在每组数据之后输出一个空行，除了最后一组数据之后
        {
            cout << endl;
        }
        tree_data.clear();
        total = 0;
    }
    return 0;
}
```

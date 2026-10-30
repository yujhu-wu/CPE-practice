# UVa 10409 – Die Game

> CPE一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10409(PDF)](https://onlinejudge.org/external/104/10409.pdf) |
| CPE出題年份 | 2014、2018 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法([solution.cpp](solution.cpp))

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    while(cin >> n && n != 0)
    {
        string act;
        int top = 1, north = 2, west = 3, east = 4, south = 5, bottom = 6;
        int temp;
        while(n--)
        {
            cin >> act;
            if(act == "north")
            {
                temp = top;
                top = south;
                south = bottom;
                bottom = north;
                north = temp;

            }
            else if(act == "south")
            {
                temp = top;
                top = north;
                north = bottom;
                bottom = south;
                south = temp;
            }
            else if(act == "west")
            {
                temp = top;
                top = east;
                east = bottom;
                bottom = west;
                west = temp;
            }
            else if(act == "east")
            {
                temp = top;
                top = west;
                west = bottom;
                bottom = east;
                east = temp;
            }
        }
        cout << top << endl;
    }
    return 0;
}
```

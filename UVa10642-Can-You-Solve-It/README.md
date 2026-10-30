# UVa 10642 – Can You Solve It?

> CPE一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10642(PDF)](https://onlinejudge.org/external/106/10642.pdf) |
| CPE出題年份 | 2011、2022 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法([solution.cpp](solution.cpp))

```cpp
/*
解題過程：
1. 觀察出規則：一個點從(0,0)到(x,y)步數為 0+1+…+(x+y)，因此以此為計算基礎
，算出(0,0)到(0,x+y)的所需步數，再扣除x，得到(x,y)步數
2. 算出兩點從 (0, 0)所需之步數再相減，即得解答
*/
#include <iostream>

using namespace std;

int main()
{
    int n, sum1, x1, y1, sum2, x2, y2;

    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        long long int step = 0;
        sum1 = x1 + y1;
        sum2 = x2 + y2;
        for(int j = sum1 + 1; j <= sum2; j++)
        {
            step += j;
        }
        step = step - x1 + x2;

        cout << "Case " << i << ": " << step << endl;
    }
    return 0;
}
```

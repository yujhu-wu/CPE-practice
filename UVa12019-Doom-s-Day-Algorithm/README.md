# UVa 12019 – Doom’s Day Algorithm

> CPE一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 12019(PDF)](https://onlinejudge.org/external/120/12019.pdf) |
| CPE出題年份 | 2021 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法([solution.cpp](solution.cpp))

```cpp
#include <iostream>
using namespace std;

int main()
{
	char week[10][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int n;

	cin >> n;
	while(n--)
	{
		int mm, dd;
		cin >> mm >> dd;

		int w = 4;
		for(int i = 1; i < mm; i++)
			w += month[i-1];

		w = (w + dd) % 7;
		cout << week[w] << endl;
	}
	return 0;
}
```

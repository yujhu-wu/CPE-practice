# UVa 10093 – An Easy Problem!

> CPE一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10093(PDF)](https://onlinejudge.org/external/100/10093.pdf) |
| CPE出題年份 | 2023 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法([solution.cpp](solution.cpp))

```cpp
//uva10093
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
	int n, temp, max_num, total;
	string s, output;
	unordered_map<char, int> m;

	for (int i = 0; i < 10; ++i)
		m['0' + i] = i;
	for (int i = 0; i < 26; ++i)
		m['A' + i] = 10 + i;
	for (int i = 0; i < 26; ++i)
		m['a' + i] = 36 + i;
	m['-'] = 0;

	while (cin >> s) {
		n = s.length();
		total = 0;
		max_num = 1;
		for (int i = 0; i < n; ++i) {
			temp = m[ s[n - i - 1] ];
			total += temp;
			max_num = max(max_num, temp);
		}
		
		output = "such number is impossible!";
		for (int i = max_num + 1; i <= 62; ++i) {
			if (total % (i - 1) == 0) {
				output = to_string(i);
				break;
			}
		}

		cout << output << endl;
	}


	return 0;
}
```

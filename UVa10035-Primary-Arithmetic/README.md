# UVa 10035 – Primary Arithmetic

> CPE一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10035(PDF)](https://onlinejudge.org/external/100/10035.pdf) |
| CPE出題年份 | 2010、2011、2023 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法([solution.cpp](solution.cpp))

```cpp
//uva10035
#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n, m, a, b, carry, count;

	scanf("%d%d", &n, &m);
	while (n != 0 || m != 0) {
		carry = 0;
		count = 0;
		while (n > 0 || m > 0) {
			if (n % 10 + m % 10 + carry >= 10) {
				++count;
				carry = 1;
			}
			else
				carry = 0;
			n /= 10;
			m /= 10;
		}

		if (count <= 1)
			if (count == 0)
				cout << "No carry operation.\n";
			else
				cout << "1 carry operation.\n";
		else
			cout << count << " carry operations.\n";

		scanf("%d%d", &n, &m);
	}

	return 0;
}
```

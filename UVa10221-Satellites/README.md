# UVa 10221 – Satellites

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10221（PDF）](https://onlinejudge.org/external/102/10221.pdf) |
| CPE 出題年份 | 2019 |
| Online Judge | ✅ Accepted |
| 語言 | C、C++ |

## 解法 1（[solution_1.cpp](solution_1.cpp)）

```cpp
#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    char s[10];
    double PI, x, y, i, j;
    PI = atan(1) * 4;

    while (cin >> i >> j >> s) {
        if (s[0] == 'm') {
            j /= 60;
        }
        j = fmod(j, 360);
        if (j > 180) {
            j = 360 - j;
        }

        x = 2 * PI * (i + 6440) * (j / 360);
        y = 2 * (i + 6440) * sin(j * PI / 360);
        cout << fixed << setprecision(6) << x << " " << y << endl;
    }

    return 0;
}
```

## 解法 2（[solution_2.c](solution_2.c)）

```c
#include<stdio.h>
#include<math.h>

int main() {

	char s[10];
	double PI, x, y, i, j;
	PI = atan(1) * 4;
	while (scanf("%lf %lf %s",&i, &j, &s) != EOF) {
		if (s[0] == 'm')
            j /= 60;
        j = fmod(j,360); // add this line
		if(j > 180)
            j = 360 - j;

		x = 2 * PI * (i + 6440) * (j / 360);
		y = 2 * (i + 6440) * sin(j * PI / 360);
		printf("%.6lf %.6lf\n", x, y);

	}
	return 0;
}
```

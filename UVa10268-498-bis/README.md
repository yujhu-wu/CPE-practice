# UVa 10268 – 498-bis

> CPE一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10268(PDF)](https://onlinejudge.org/external/102/10268.pdf) |
| CPE出題年份 | 2020 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法1([solution_1.cpp](solution_1.cpp))

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {

    long long int x, x1, temp;
    char c;
    vector<long long int> a;

    while (scanf("%lld",&x)!=EOF) {
        while (scanf("%lld%c",&temp, &c)) {
            if (c!=' ')
                break;
            a.push_back(temp);
        }
        temp = 0, x1 = 1;
        for (int i = a.size()-1, j = 1; i>=0; i--, j++)
            temp+= a[i]*j*x1, x1*= x;
        printf("%lld\n", temp);
        a.clear();
    }
    return 0;
}
```

## 解法2([solution_2.cpp](solution_2.cpp))

```cpp
/*不知道為啥online judge一直runtime error*/
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
    string line;
    int x;
    while (cin >> x) {
        cin.ignore(); // 忽略换行符，准备读取下一行
        getline(cin, line);
        stringstream ss(line);
        int coefficients[1000];
        int coeff;
        int n = 0;
        while (ss >> coeff) {
            coefficients[n++] = coeff;
        }

        // 计算导数在 x 处的值
        int result = 0;
        int current_power = 1; // 用于累乘 x 的幂次，x^0 = 1

        // 从高次项到低次项计算导数值
        for (int i = n - 2; i >= 0; --i) {
            result += coefficients[i] * (n - i - 1) * current_power;
            current_power *= x; // 逐步增加 x 的幂次
        }

        cout << result << endl;
    }

    return 0;
}
```

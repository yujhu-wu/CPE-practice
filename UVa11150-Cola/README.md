# UVa 11150 – Cola

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 11150（PDF）](https://onlinejudge.org/external/111/11150.pdf) |
| CPE 出題年份 | 未曾出現 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法 1（[solution_1.cpp](solution_1.cpp)）

```cpp
#include <iostream>
using namespace std;

int main(){
    int cola_num;

    while (cin >> cola_num){
        int max_cola = 0;

        for (int i = 0; i < 3; i++){ // number of empty bottle I borrow
            int drink_cola_sum = cola_num;
            int tmp_cola = 0;
            int tmp_empty = cola_num + i;

            while (tmp_empty >= 3){
                drink_cola_sum += tmp_empty / 3;
                tmp_empty = tmp_empty % 3 + tmp_empty / 3;
            }

            // can't return empty bottle to friend => can't borrow i bottles
            if (tmp_empty < i){
                drink_cola_sum = 0;
            }

            if (max_cola < drink_cola_sum){
                max_cola = drink_cola_sum;
            }
        }
        cout << max_cola << endl;
    }

    return 0;
}
```

## 解法 2（[solution_2.cpp](solution_2.cpp)）

```cpp
#include <iostream>

using namespace std;

int main(){
	int n;
	while(cin >> n)
	{
		cout << n * 3 / 2 << endl;
	}
	return 0;
}
```

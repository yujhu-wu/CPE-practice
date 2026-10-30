# UVa 10931 – Parity

> CPE一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10931(PDF)](https://onlinejudge.org/external/109/10931.pdf) |
| CPE出題年份 | 2014、2022 |
| Online Judge | ✅ Accepted |
| 語言 | C、C++ |

## 解法1([solution_1.cpp](solution_1.cpp))

```cpp
#include <iostream>

const unsigned int MASK = 1<<31;

int main(){
  using namespace std;
  int input;
  while(cin >> input,input){
    cout << "The parity of ";
    unsigned int mask = 1<<31;
    int count = 0;
    for(;mask&& !(mask&input);mask >>= 1);

    for(;mask;mask >>= 1){
      cout << 0 + !!(mask & input);
      count += !!(mask & input);
    }

   cout << " is " << count << " (mod 2)."<< endl;


  }
  return 0;
}
```

## 解法2([solution_2.c](solution_2.c))

```c
//一針的沒通過
#include <stdio.h>
#include <stdlib.h>

int bin(int y);
int counter;

int main(void)
{
    int x;
    scanf("%d", &x);

    while (0)
    {
        counter = 0;
        printf("The parity of ");
        bin(x);
        printf(" is %d (mod 2).", counter);
        scanf("%d", &x);
    }
    return 0;
}

int bin(int y)
{
    if (y > 0)
    {
        bin(y / 2);
        printf("%d", y % 2);
        if(y % 2 == 1)
        {
           ++counter;
        }
    }
}
```

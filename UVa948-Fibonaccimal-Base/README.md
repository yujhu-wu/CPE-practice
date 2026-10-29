# UVa 948 – Fibonaccimal Base

> CPE 一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 948（PDF）](https://onlinejudge.org/external/9/948.pdf) |
| CPE 出題年份 | 2018 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

> 📝 考3次的應該不會再考了

## 解法（[solution.cpp](solution.cpp)）

```cpp
#include <iostream>
using namespace std;

int main()
{
	int fib[39],i,n,in1;
	
	fib[0]=1;
	fib[1]=2;
	for(i=2;i<39;i++)//產生費氏數列 
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	
	cin>>n;//輸入測資數量 
	while(n--) 
	{
		cin>>in1;//輸入測資
		cout<<in1<<" = ";//照格式輸出 
		
		int flag=0; 
		
		for(i=38;i>=0;i--)//將輸入的數字減去費氏數列的數 
		{				  //如果為正就輸出1 
			if(in1-fib[i]>=0)
			{
				cout<<"1";
				in1=in1-fib[i];
				flag=1;//找到第一個1之後才可以輸出0 
			}
			else if(flag==1)
			{
				cout<<"0";
			}
		}
		cout<<" (fib)"<<endl;//輸出結尾 
	}
	return 0;
}
```

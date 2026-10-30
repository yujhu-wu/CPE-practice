# UVa 10019 – Funny Encryption Method

> CPE一星題練習 · [回到目錄](../README.md)

| 項目 | 內容 |
|---|---|
| 題目 | [UVa 10019(PDF)](https://onlinejudge.org/external/100/10019.pdf) |
| CPE出題年份 | 2013 |
| Online Judge | ✅ Accepted |
| 語言 | C++ |

## 解法([solution.cpp](solution.cpp))

```cpp
#include <iostream>
using namespace std;

int main()
{
	int n,in1,cn1;
	
	cin>>n;//輸入測資數量 
	while(n--) 
	{
		int b1=0,b2=0;
		cin>>in1;//輸入測資
		cn1=in1;
		
		while(cn1>0)//十進制轉二進制 
		{
			if(cn1%2==1)//利用短除法 
			{
				b1=b1+1;//計算有幾個1 
			}
			cn1=cn1/2;
		}
		
		cn1=in1;
		while(cn1>0)//十六進制轉二進制 
		{			//利用1個位數轉4個位數的方法 
			int temp=cn1%10;//先取最左邊的位數 
			while(temp>0)//再利用10進位轉2進位的方法 
			{			 
				if(temp%2==1)
				{
					b2=b2+1;
				}
				
				temp=temp/2;
			}
			cn1=cn1/10;
			
		}
		
		cout<<b1<<" "<<b2<<endl;//輸出 
	}
	return 0;
}
```

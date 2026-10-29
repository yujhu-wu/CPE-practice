#include <iostream>
using namespace std;

void swap (int *a,int *b)//交換的函式 
{
	int t=*a;
	*a=*b;
	*b=t;
}

int main()
{
	int i,t,n,l;
	
	while(cin>>n)//輸入測資數量 
	{
		
		while(n--)
		{
			cin>>l;//輸入數列項數 
			int num[l]={0},count=0;
			
			for(i=0;i<l;i++)//輸入數列 
			{
				cin>>num[i];
				
			}
			
			for(i=0;i<l;i++)//氣泡排列法 
			{
				for(t=0;t<l-i-1;t++)
				{
					if(num[t]>num[t+1])
					{
						swap(&num[t],&num[t+1]);//交換 
						count++;//計算次數 
					}
				}
			}
			
			cout<<"Optimal train swapping takes "<<count<<" swaps." <<endl;//輸出
		}
	}
    return 0;
}

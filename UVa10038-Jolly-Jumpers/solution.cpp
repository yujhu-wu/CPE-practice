#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, i;
	while (cin >> n)
	{
		int num[n] = {0}, count[n] = {0};  // num 用于存储输入的序列，count 用于记录差值出现次数
		int jolly = 1;  // 判断是否为 Jolly
		
		for (i = 0; i < n; i++)  // 输入序列并进行运算
		{
			cin >> num[i];  // 输入数列

			if (i > 0)  // i 要大于 0 才可以运算
			{
				int temp = abs(num[i] - num[i - 1]);  // 计算两两相邻的数的差的绝对值
				if (temp < n)  // temp 必须小于 n 不然就不是 Jolly
				{
					count[temp]++;  // 计算这个差出现几次
					if (count[temp] > 1 || temp == 0)  // 这个差为 0 或者出现超过一次就不是 Jolly
					{
						jolly = 0;
					}
				}
				else
				{
					jolly = 0;
				}
			}
		}

		if (jolly == 1)  // 输出
		{
			cout << "Jolly" << endl;
		}
		else
		{
			cout << "Not jolly" << endl;
		}
	}
	return 0;
}

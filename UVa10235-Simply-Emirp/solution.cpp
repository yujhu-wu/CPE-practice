#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, re;
    bool flag1, flag2;

    while(cin >> n)
    {
        flag1 = true;
        flag2 = true;
        re = 0;

        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                flag1 = false;
                break;
            }
        }

        if(flag1)
        {
            int temp = n;

            while(temp > 0)
            {
                re = re * 10 + temp % 10;
                temp = temp / 10;
            }
            if(re == n)
            {
                flag2 = false;
            }
            else
            {
                for(int i = 2; i <= sqrt(re); i++)
                {
                    if(re % i == 0)
                    {
                        flag2 = false;
                        break;
                    }
                }
            }
        }
        if(flag1 && flag2)
        {
            cout << n << " is emirp." << endl;
        }
        else if(flag1)
        {
            cout << n << " is prime." << endl;
        }
        else
        {
            cout << n << " is not prime." << endl;
        }
    }
    return 0;
}

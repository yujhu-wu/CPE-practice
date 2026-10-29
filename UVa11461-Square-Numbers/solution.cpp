#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, sq;

    while(cin >> a >> b)
    {
        if(a == 0 && b == 0)
        {
            break;
        }

        int counter = 0;

        for(int i = a; i <= b; ++i)
        {
            sq = sqrt(i); //因為是整數型態所以開根號後也是整數,所以再乘回來不一定會是原本的數
            if(sq * sq == i)
            {
                counter++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}

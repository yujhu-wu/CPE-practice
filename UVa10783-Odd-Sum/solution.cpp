#include <iostream>

using namespace std;

int main()
{
    int n, counter = 1;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        if(a > b)
        {
            int c = a;
            a = b;
            b = c;
        }
        int sum = 0;
        for(int i = a; i <= b; i++)
        {
            if(i % 2 == 1) sum += i;
        }
        cout << "Case " << counter << ": " << sum << endl;
        counter++;
    }
    return 0;
}

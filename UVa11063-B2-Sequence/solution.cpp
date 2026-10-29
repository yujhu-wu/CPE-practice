#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    int counter = 1;
    while(cin >> n)
    {
        int number[n] = {0};
        set<int> d;
        d.clear();

        for(int i = 0; i < n; i++)
        {
            cin >> number[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(number[i] < 1) break;
            else if(number[i - 1] >= number[i] && i - 1 > 0) break;
            for(int j = i; j < n; j++)
            {
                d.insert(number[i] + number[j]);
            }
        }
        if(d.size() == (n + 1) * n / 2) cout << "Case #" << counter << ": It is a B2-Sequence." << endl;
        else cout << "Case #" << counter << ": It is not a B2-Sequence." << endl;
        cout << endl; //要換兩行
        counter++;
    }
    return 0;
}

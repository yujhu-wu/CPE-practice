#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n, m;
    while(cin >> n && n != "0")
    {
        int sum = 0, degree = 0;
        for(int i = 0; i < n.length(); i++)
        {
            sum = sum + (n[i] - '0');
        }
        while(sum != 0 && sum != 9 && sum % 9 == 0)
        {
            degree++;
            m = to_string(sum); // 將sum轉成字串，以便繼續計算
            sum = 0;
            for(int i = 0; i < m.length(); i++)
            {
                sum = sum + (m[i] - '0');
            }
        }
        if(sum == 9) degree++;

        if(degree == 0) cout << n << " is not a multiple of 9." << endl;
        else cout << n << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
    }
    return 0;
}

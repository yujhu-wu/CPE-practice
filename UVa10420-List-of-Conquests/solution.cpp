#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    string country, name;
    map<string, int> counter;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> country;
        getline(cin, name);
        counter[country]++;
    }
    for(auto it = counter.begin(); it != counter.end(); it++)
    {
        cout << it -> first << " " << it-> second << endl;
    }
    return 0;
}

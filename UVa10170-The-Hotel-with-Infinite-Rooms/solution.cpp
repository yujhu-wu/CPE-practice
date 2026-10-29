#include <iostream>
using namespace std;

int main()
{
    long long int s, d;
    while(cin >> s >> d){
        long long int ans, counter=0;
        for(long long int i = s; i <= d; i++){
            counter += i;
            if(counter >= d && d > 0){
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

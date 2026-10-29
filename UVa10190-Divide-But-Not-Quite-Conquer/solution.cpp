#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int n, m;
    while(cin >> n >> m){
        long long int cn = m;
        for(int i = 1; cn < n && m > 1; i++){
            cn = pow(m, i);
        }
        if(cn > n || m <= 1){
            cout << "Boring!" << endl;
        }
        else{
            while(cn > 0){
                cout << cn;
                if(cn != 1){
                    cout << " ";
                }
                else{
                    cout << endl;
                }
                cn /= m;
            }
        }
    }
    return 0;
}

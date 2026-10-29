/*
(q^(k-1)*p) * (1-(q^n^R)) / (1-q^n)。(首項：(q^(k-1)*p)、公比：q^n)
第R回合成功機率：q^[(r-1)*n] * q^(i-1) * p
公式：q^(i-1) * p / (1- q^n)  //i表示第i個人
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int s;
    int n, i;
    double p, q, ans;

    cin >> s;

    while(s--){
        cin >> n >> p >> i;

        if(p == 0){
            ans = 0.0000; // 初始化 ans 為 0
        }else{
            q = 1 - p;
            ans = pow(q, i-1) * p / (1 - pow(q, n));
        }
        cout << fixed << setprecision(4) << ans << endl;
    }
    return 0;
}

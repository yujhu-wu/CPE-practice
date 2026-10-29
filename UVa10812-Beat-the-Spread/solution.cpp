#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--){
        int s, d;
        cin >> s >> d;

        int a, b;
        a = (s + d) / 2;
        b = (s - d) / 2;

        if((s + d) % 2 == 1 || (s - d) % 2 == 1 || a < 0 || b < 0){
            cout << "impossible" << endl;
        }else{
            cout << a << " " << b << endl;
        }
        /*這樣寫也行
        if((a + b == s && a - b == d) && b >= 0){ 
					cout << a << " " << b << endl;
				}else{
					cout << "impossible" << endl;
				}
				*/
    }
    return 0;
}

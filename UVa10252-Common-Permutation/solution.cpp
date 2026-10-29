#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string a;
    string b;

    while(getline(cin, a) && getline(cin, b)){
        string common; //儲存共同的字母
        int i = 0, j = 0;

        //將字母由小到大排列
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        while(i < a.length() && j < b.length()){
            if(a[i] == b[j]){
                common += a[i];
                i++;
                j++;
            }else if(a[i] < b[j]){
                i++;
            }else{
                j++;
            }
        }
        cout << common << endl;
    }
    return 0;
}

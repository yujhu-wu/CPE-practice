//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int GCD(int i, int j)
{
    if(j % i == 0){
        return i;
    }
    else{
        return GCD(j % i, i);
    }
}

int main()
{
    int n, g;
    while((cin >> n) && (n != 0)){
		    g = 0;
        for(int  i = 1; i < n; i++){
            for(int j = i + 1; j <= n; j++){
                g += GCD(i, j);
            }
        }
        printf("%d\n", g);
    }
    return 0;
}

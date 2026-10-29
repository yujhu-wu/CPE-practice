#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S1, S2;
    cin >> N;
    for (int Case = 1; Case <= N; Case++){
        cin >> S1 >> S2;
        int n1 = 0, n2 = 0;
        for (int i = 0; i < S1.size(); i++){
            n1 *= 2;
            n1 += S1[i] - '0';
        }
        for (int i = 0; i < S2.size(); i++){
            n2 *= 2;
            n2 += S2[i] - '0';
        }
        cout << "Pair #" << Case;
        if (__gcd(n1, n2) > 1) cout << ": All you need is love!\n";
        else cout << ": Love is not all you need!\n";
    }
    return 0;
}

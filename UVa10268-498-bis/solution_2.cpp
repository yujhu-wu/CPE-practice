/*不知道為啥online judge一直runtime error*/
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
    string line;
    int x;
    while (cin >> x) {
        cin.ignore(); // 忽略换行符，准备读取下一行
        getline(cin, line);
        stringstream ss(line);
        int coefficients[1000];
        int coeff;
        int n = 0;
        while (ss >> coeff) {
            coefficients[n++] = coeff;
        }

        // 计算导数在 x 处的值
        int result = 0;
        int current_power = 1; // 用于累乘 x 的幂次，x^0 = 1

        // 从高次项到低次项计算导数值
        for (int i = n - 2; i >= 0; --i) {
            result += coefficients[i] * (n - i - 1) * current_power;
            current_power *= x; // 逐步增加 x 的幂次
        }

        cout << result << endl;
    }

    return 0;
}

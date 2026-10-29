#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    char s[10];
    double PI, x, y, i, j;
    PI = atan(1) * 4;

    while (cin >> i >> j >> s) {
        if (s[0] == 'm') {
            j /= 60;
        }
        j = fmod(j, 360);
        if (j > 180) {
            j = 360 - j;
        }

        x = 2 * PI * (i + 6440) * (j / 360);
        y = 2 * (i + 6440) * sin(j * PI / 360);
        cout << fixed << setprecision(6) << x << " " << y << endl;
    }

    return 0;
}

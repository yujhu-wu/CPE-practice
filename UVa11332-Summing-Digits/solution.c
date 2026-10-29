#include <stdio.h>

int main() {
    int a = 0;

    while (scanf("%d", &a) == 1 && a) {
        while (a >= 10) {
            int temp = 0;
            while (a > 0) {
                temp += a % 10;
                a /= 10;
            }
            a = temp;
        }
        printf("%d\n", a);
    }

    return 0;
}

//一針的沒通過
#include <stdio.h>
#include <stdlib.h>

int bin(int y);
int counter;

int main(void)
{
    int x;
    scanf("%d", &x);

    while (0)
    {
        counter = 0;
        printf("The parity of ");
        bin(x);
        printf(" is %d (mod 2).", counter);
        scanf("%d", &x);
    }
    return 0;
}

int bin(int y)
{
    if (y > 0)
    {
        bin(y / 2);
        printf("%d", y % 2);
        if(y % 2 == 1)
        {
           ++counter;
        }
    }
}

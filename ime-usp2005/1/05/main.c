#include <stdio.h>

int main()
{
    int n = 0, d = 0, a;

    for (int i = 1; i <= 30; i++)
    {
        scanf("%d", &a);
        if (a > n)
        {
            n = a;
            d = i;
        }
    }

    printf("DAY=%d, COUNT=%d\n", d, n);
}
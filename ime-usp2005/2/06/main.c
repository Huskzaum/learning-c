#include <stdio.h>

int main()
{
    int n, d = 2;
    scanf("%d", &n);
    printf("Result=");
    while (n != 1)
    {
        if (n % d == 0)
        {
            printf("%d ", d);
            n /= d;
        }
        else
            d++;
    }
    printf("\n");
}
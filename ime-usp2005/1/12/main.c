#include <stdio.h>

int main()
{
    int a, b, r;
    scanf("%d %d", &a, &b);
    printf("MDC(%d,%d) = ", a, b);
    while (r > 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    printf("%d\n", a);
}
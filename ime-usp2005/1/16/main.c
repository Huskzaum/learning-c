#include <stdio.h>

int main()
{
    int n, d = 0, b = 1;
    scanf("%d", &n);
    while (n > 0) {
        d += (n % 10) * b;
        n /= 10;
        b *= 2;
    }
    printf("Decimal=%d\n", d);
}
#include <stdio.h>

int main()
{
    int n, bin = 0, b = 1;
    scanf("%d", &n);
    while (n > 0) {
        bin += (n % 2) * b;
        n /= 2;
        b *= 10;
    }
    printf("Binary=%d\n", bin);
}
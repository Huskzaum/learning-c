#include <stdio.h>

int main()
{
    int n, nf = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
        nf *= i;
    printf("Result: %d\n", nf);
}
#include <stdio.h>
#include <math.h>

/* idk if it works xd */

float fact(int x)
{
    float s = 1;
    for (int i = 1; i <= x; i++)
    {
        s *= i;
    }
    return s;
}

int main(void)
{
    int x, n;
    scanf("%d %d", &x, &n);
    float cos = 0;
    for (int i = 0; i <= n; i++)
        cos += (pow(-1, i) * pow(x, 2 * i)) / fact(2 * i);
    printf("Result=%.4f\n", cos);
    return 0;
}
#include <stdio.h>

int main(void)
{
    float x, z, m;
    scanf("%f %f", &x, &z);
    m = (z / 100) + 1;
    for (int i = 1; i <= 12; i++)
    {
        x *= m;
        printf("M=%d, X=%.2f\n", i, x);
    }
    return 0;
}
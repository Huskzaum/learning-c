#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    float x, y;
    for (; n > 0; n--)
    {
        scanf("%f %f", &x, &y);
        if (x >= 0 && y >= 0 && (x * x) + (y * y) <= 1)
            printf("OK\n");
        else
            printf("FAIL\n");
    }
    return 0;
}
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    float h = 0;
    for (; n > 0; n--)
        h += 1.0 / n;
    printf("%.4f\n", h);
    return 0;
}
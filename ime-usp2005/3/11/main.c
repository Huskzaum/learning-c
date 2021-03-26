#include <stdio.h>

int main(void)
{
    int n;
    float s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        s += (float)(i + 1) / (n - i);
    printf("Result=%.2f\n", s);
    return 0;
}
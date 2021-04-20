#include <stdio.h>

int main()
{
    int x, h, m;
    scanf("%d", &x);
    h = x / 3600;
    x -= h * 3600;
    m = x / 60;
    x -= m * 60;
    printf("%d:%d:%d\n", h, m, x);
    return 0;
}
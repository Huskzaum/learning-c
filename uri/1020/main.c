#include <stdio.h>

int main()
{
    int x, y, m;
    scanf("%d", &x);
    y = x / 365;
    x -= y * 365;
    printf("%d ano(s)\n", y);
    m = x / 30;
    x -= m * 30;
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", x);
    return 0;
}
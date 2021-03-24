#include <stdio.h>

int main()
{
    int a, b, c, ax;
    scanf("%d %d %d", &a, &b, &c);
    if (b > a) {
        ax = a;
        a = b;
        b = ax;
    }
    if (c > a) {
        ax = a;
        a = c;
        c = ax;
    }
    if (c > b) {
        ax = b;
        b = c;
        c = ax;
    }
    printf("%d, %d, %d\n", a, b, c);
}
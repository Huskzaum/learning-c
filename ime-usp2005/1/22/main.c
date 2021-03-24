#include <stdio.h>

int main()
{
    int n, b, a, c = 0, cm = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a > b)
            c++;
        else
            c = 1;
        if (c > cm)
            cm = c;
        b = a;
    }
    printf("Result=%d\n", cm);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, s = 0, m = 0;
    scanf("%d", &n);
    for (; n > 0; n--)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
            s++;
        else
            s--;
        if (m < abs(s))
           m = abs(s);
    }
    if (s == 0 || m == abs(s))
        printf("%d-alternative\n", m);
    else
        printf("no\n");
}
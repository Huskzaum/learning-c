#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, b = -1, c = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a == b)
            c++;
        b = a;    
    }
    printf("Result=%d\n", c);
}
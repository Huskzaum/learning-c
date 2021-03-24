#include <stdio.h>

int main()
{
    int n, a, s;
    scanf("%d", &n);
    for (int i = 1; ; i += 2)
    {
        a = 0;
        s = 0;
        for (int j = i; a < n; j += 2)
        {
            s += j;
            a++;
        }
        if (s == (n * n * n))
        {
            printf("Result=");
            for (int k = 0; k < n; k++)
                printf("%d ", i + 2 * k);
            printf("\n");
            break;
        }
    }
}
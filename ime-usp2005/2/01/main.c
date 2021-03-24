#include <stdio.h>

int main()
{
    int n, u, s;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        s = 0;
        do
        {
            scanf("%d", &u);
            if (u % 2 == 0)
                s += u;
        } while (u != 0);
        printf("Result(#%d)=%d\n", i, s);
    }
}
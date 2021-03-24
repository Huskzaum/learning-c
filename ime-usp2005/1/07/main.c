#include <stdio.h>

int main()
{
    int n, a, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
            sum += a;
    }
    printf("Result: %d\n", sum);
    return 0;
}
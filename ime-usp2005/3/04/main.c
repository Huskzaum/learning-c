#include <stdio.h>

int main(void)
{
    int n, c = 0, x, y;
    scanf("%d", &n);
    for (; n > 0; n--)
    {
        scanf("%d %d", &x, &y);
        if (x <= 0 && y <= 0 && (y + x * x + 2 * x - 3) <= 0)
        {
            printf("OK\n");
            c++;
        }
        else if (x >= 0 && (y + x * x - 2 * x - 3) <= 0)
        {
            printf("OK\n");
            c++;
        }
        else
        {
            printf("FAIL\n");
        }
    }
    printf("Count=%d\n", c);
    return 0;
}
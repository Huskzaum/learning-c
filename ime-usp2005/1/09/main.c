#include <stdio.h>

int main()
{
    int n, i, j, k = 0, m = 0;
    scanf("%d %d %d", &n, &i, &j);
    while (k < n)
    {
        if (m % i == 0 || m % j == 0)
        {
            printf("%d ", m);
            k++;
        }
        m++;
    }
    printf("\n");
}
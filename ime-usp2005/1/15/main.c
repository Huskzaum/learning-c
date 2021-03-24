#include <stdio.h>

int main()
{
    int n, j, m;
    scanf("%d %d %d", &n, &j, &m);
    int c = j;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", c);
        c += m;
    }
    printf("\n");
}
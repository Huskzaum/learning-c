#include <stdio.h>

int main()
{
    int n, z = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            z++;
    }
    printf(z == 2 ? "Prime\n" : "Primen't\n");
}
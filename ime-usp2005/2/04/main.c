#include <stdio.h>
#include <math.h>

int isPrime(int number)
{
    int z = 0, i;
    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
            z++;
        if (z > 2)
            return 0;
    }
    return 1;
}

int main()
{
    int n, a, s = 0;
    scanf("%d", &n);
    for (; n > 0; n--)
    {
        scanf("%d", &a);
        if (isPrime(a))
            s += a;
    }
    printf("Result=%d\n", s);
}
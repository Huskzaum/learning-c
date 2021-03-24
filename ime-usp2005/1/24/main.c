#include <stdio.h>
#include <math.h>

int main()
{
    long long n, y;
    int o, x;
    scanf("%lld %d", &n, &o);
    x = log10(n)+1;
    for (int i = 0; i < x; i++)
    {
        for (int j = i; j < x; j++)
        {
            y = (n % (long long) pow(10, j+1)) / (long long) pow(10, i);
            if (y == o) {
                printf("Subnumber\n");
                return 0;
            }
        }
    }
    printf("Subnumbern't\n");
}
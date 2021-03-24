#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    for (int i = 10; i <= 99; i++)
    {
        for (int j = 0; j <= 99; j++)
        {
            a = (i * 100) + j;
            if ((i + j) == sqrt(a)) {
                printf("%d\n", a);
            }
        }
    }
}
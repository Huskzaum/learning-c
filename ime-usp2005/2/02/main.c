#include <stdio.h>
#include <math.h>

int main()
{
    int c, d, s = 0;
    scanf("%d", &c);
    for (int i = 0; i < c; i++)
    {
        for (int a = 1; a < c; a++)
        {
            for (int b = 1; b < c; b++)
            {
                if ((c * c) == (a*a) + (b*b)) {
                    printf("A=%d, B=%d\n", a, b);
                    return 0;
                }
            }
        }
    }
    printf("Try another number :(\n");
}
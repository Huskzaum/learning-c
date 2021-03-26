#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float d, r1, r2;
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        d = sqrt(d);
        r1 = (-b + d) / (2.0 * a);
        r2 = (-b - d) / (2.0 * a);
        printf("R1=%.2f\n", r1);
        printf("R2=%.2f", r2);
    }
    else if (d < 0)
    {
        printf("PR=%.2f\n", -b / (2.0 * a));
        printf("PI=%.2f", d / (2 * a));
    }
    else
    {
        printf("RD=%.2f", -b / (2.0 * a));
    }
    printf("\n");
    return 0;
}
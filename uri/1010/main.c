#include <stdio.h>

/* fuck it */

int main()
{
    int i1, c1, i2, c2;
    double p1, p2, sum;
    scanf("%d %d", &i1, &c1);
    scanf("%lf", &p1);
    scanf("%d %d", &i2, &c2);
    scanf("%lf", &p2);
    sum = (p1 * c1) + (p2 * c2);
    printf("VALOR A PAGAR: R$ %.2lf\n", sum);
    return 0;
}
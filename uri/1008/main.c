#include <stdio.h>

int main()
{
    int n, h;
    double r;
    scanf("%d %d %lf", &n, &h, &r);
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2lf\n", r * h);
    return 0;
}
#include <stdio.h>

int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("%.3lf\n", (x*y)/12);
    return 0;
}
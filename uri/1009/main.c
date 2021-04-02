#include <stdio.h>

int main()
{
    char n[20];
    double f, s;
    scanf("%s %lf %lf", n, &f, &s);
    printf("TOTAL = R$ %.2lf\n", f + (s * 0.15));
    return 0;
}
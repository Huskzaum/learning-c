#include <stdio.h>
#include <math.h>
#define roundz(x,d) ((floor(((x)*pow(10,d))+.5))/pow(10,d))

int main()
{
    double value, c, r;
    scanf("%lf", &value);
    printf("NOTAS:\n");
    double n[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0};
    for (int i = 0; i < 6; i++) {
        c = n[i];
        r = floor(roundz(value, 2) / c);
        value -= r * c;
        printf("%.0lf nota(s) de R$ %.2lf\n", r, c);
    }
    printf("MOEDAS:\n");
    double m[] = {1.0, 0.5, 0.25, 0.1, 0.05, 0.01};
    for (int i = 0; i < 6; i++) {
        c = m[i];
        r = floor(roundz(value, 2) / c);
        value -= r * c;
        printf("%.0lf moeda(s) de R$ %.2lf\n", r, c);
    }
    return 0;
}
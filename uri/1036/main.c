#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double delta = pow(b, 2) - (4 * a * c);
    if (delta < 0 || a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        double sq = sqrt(delta);
        double aux = 2.0 * a; 
        printf("R1 = %.5lf\n", (-b + sq) / aux);
        printf("R2 = %.5lf\n", (-b - sq) / aux);
    }
    return 0;
}
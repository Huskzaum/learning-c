#include <stdio.h>

int main(void)
{
    int n, ap = 0, rp = 0;
    scanf("%d", &n);
    float a, b, c, m = 0.0, mc = 0.0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%f %f %f", &a, &b, &c);
        m = (a + b + c) / 3.0;
        printf("M=%.2f->", m);
        if (m >= 5)
        {
            printf("OK\n");
            ap++;
        }
        else
        {
            printf("FAIL\n");
            rp++;
        }
        mc += m;
    }
    mc /= n;
    printf("MC=%.2f, A=%d, R=%d\n", mc, ap, rp);
    return 0;
}
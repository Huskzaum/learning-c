#include <stdio.h>
#include <math.h>

int main()
{
    int m, n, max = -1, v, xM, yM;
    scanf("%d %d", &m, &n);
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            v = i*j - i*i + j;
            if (v > max) {
                max = v;
                xM = i;
                yM = j;
            }
        }
    }
    printf("M=%d, xM=%d, yM=%d\n", v, xM, yM);
}
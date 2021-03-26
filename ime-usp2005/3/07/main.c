#include <stdio.h>
/* idk if it works too xd */

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    float sin, t;
    sin = t = x;
    for (int i = 1; t >= y || t <= -y; i++)
    {
        t = -(t * x * x) / ((2.0 * i + 1.0) * 2.0 * i);
        sin += t;
    }
    printf("Result=%.4f\n", sin);
    return 0;
}
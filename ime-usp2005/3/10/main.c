#include <stdio.h>

int main(void)
{
    int pa = 0, pb = 0, a = 0, b = 0, ax, y = 0;
    scanf("%d %d %d %d", &pa, &pb, &a, &b);
    if (pb < pa) {
        ax = pa;
        pa = pb;
        pb = ax;
        ax = a;
        a = b;
        b = ax;
    }
    printf("PA=%d, A=%d, PB=%d, B=%d\n", pa, a, pb, b);
    if (a > b) {
        while (pa <= pb) {
            pa += (pa * a) / 100;
            pb += (pb * b) / 100;
            y++;
        }
        printf("PA=%d, PB=%d\n", pa, pb);
        printf("Years=%d\n", y);
    } else {
        printf("The smallest city will not surpass the other.\n");
    }
    return 0;
}